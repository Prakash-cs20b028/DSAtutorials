#include<iostream>
using namespace std;
struct node
{
    int data;
    int height;   // if we use height as one extra data in node then
    node* left;   // it makes easier like whenever we add or rotate the node then we
    node* right;  // just update height so that we could easily find balance factor.
};
int Height(struct node* root)
{
    if(root == NULL)                                        
    {
        return 0;
    }
    else
    {
        return root->height;                
    }                                       
    // if(root != NULL)      this can be used too.                                   
    // {    
    //     int x = Height(root->left);
    //     int y = Height(root->right);
    //     return (x > y) ? x+1: y+1;
    // }
    // else
    // {
    //     return 0;
    // }
    
}
int max1(int a,int b)
{
    return a>b ? a : b;
}
int GetBalance(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return (Height(root->left)-Height(root->right));

}
node* LL(struct node* root)
{
    struct node* x,*y;
    x = root->left;
    y = x->right;

    x->right = root;
    root->left = y;
    //After rotation add new height;
    root->height = 1 + max1(Height(root->left),Height(root->right));
    x->height = 1 + max1(Height(x->left),Height(x->right));

    return x;
}
node* RR(struct node* root)
{
    struct node* p1,*p2;
    p1 = root->right;
    p2 = p1->left;

    p1->left = root;
    root->right = p2;
    //After rotation we must need to update height.
    root->height = 1 + max1(Height(root->left),Height(root->right));
    p1->height = 1 + max1(Height(p1->left),Height(p1->right));

    return p1;
}
node* LR(struct node* root)
{
    struct node* t1,*t2,*t3,*t4;
    t1 = root->left;
    t2 = t1->right;
    t3 = t2->left;
    t4 = t2->right;

    t2->left = t1;
    t2->right = root;
    t1->right = t3;
    root->left = t4;

    //for below the code we need to update those nodes whose value
    //has been changed during rotation.
    t1->height = 1 + max1(Height(t1->left),Height(t1->right));
    t2->height = 1 + max1(Height(t2->left),Height(t2->right));
    root->height = 1 + max1(Height(root->left),Height(root->right));

return t2;
}
node* RL(struct node* root)
{
    struct node* t1,*t2,*t3,*t4;
    t1 = root->right;
    t2 = t1->left;
    t3 = t2->left;
    t4 = t2->right;

    t2->left = root;
    t2->right = t1;
    root->right = t3;
    t1->left = t4;

    t1->height = 1 + max1(Height(t1->left),Height(t1->right));
    t2->height = 1 + max1(Height(t2->left),Height(t2->right));
    root->height = 1 + max1(Height(root->left),Height(root->right));

return t2;
}
node* Insert(struct node* root,int key)
{
    if(root == NULL)
    {
        root = new  node();
        root->data = key;
        root->left = root->right = NULL;
        root->height = 1;
        return root;
    }
    else if(root->data < key)
    {
        root->right = Insert(root->right ,key);   //we are using root->right because we want to make connection of pre node with the current node.
    }
    else if(root->data > key)
    {
        root->left = Insert(root->left ,key);
    }
    root->height = 1 + max1(Height(root->left),Height(root->right)); 
    int balance = GetBalance(root);
        
    if(balance > 1 && key < root->left->data)
    {
        return LL(root);
    }
    if(balance < -1 && key > root->right->data)
    {
        return RR(root);
    }
    if(balance > 1 && key > root->left->data)
    {
        return LR(root);
    }
    if(balance < -1 && key < root->right->data)
    {
        return RL(root);
    }
return root;
}
void Preorder(struct node* root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        Preorder(root->left);        
        Preorder(root->right);
    }
}
int main()
{
    struct node* root = NULL;
    root = Insert(root,20);   //In every line we need of root because we are updating every time 
    root = Insert(root,25);   //root node if we didn't send then it will print just first one 
    root = Insert(root,22);   //in case of binary tree root was not updating so we didn't use.
    root = Insert(root,14);
    root = Insert(root,13);   // we can't get height as 3 because before we get it had already been updated.
    
    Preorder(root);
return 0;
}
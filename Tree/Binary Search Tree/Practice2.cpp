#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    int height;
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
}
node* LL(struct node* root)
{
    struct node* p,*q;
    p = root->left;
    q = p->right;
    p->right = root;
    root->left = q;

    root->height = 1 + max(Height(root->left),Height(root->right));
    p->height = 1 + max(Height(p->left),Height(p->right));

return p;
}
node* LR(struct node* root)
{
    struct node* p1,*x1,*x2,*p2;
    p1 = root->left;
    p2 = p1->right;
    x1 = p1->right->left;
    x2 = p1->right->right;

    p2->left = p1;
    p2->right = root;
    p1->right = x1;
    root->left = x2;

    root->height = 1 + max(Height(root->left),Height(root->right));
    p1->height = 1 + max(Height(p1->left),Height(p1->right));
    p2->height = 1 + max(Height(p2->left),Height(p2->right));

return p2;
}
node* RR(struct node* root)
{
    struct node* p1,*p2;
    p1 = root->right;
    p2 = p1->left;

    p1->left = root;
    root->right = p2;

    root->height = 1 + max(Height(root->left),Height(root->right));
    p1->height = 1 + max(Height(p1->left),Height(p1->right));
return p1;
}
node* RL(struct node* root)
{
    struct node* p1,*x1,*x2,*p2;
    p1 = root->right;
    p2 = p1->left;
    x1 = p2->left;
    x2 = p2->right;

    p2->left = root;
    p2->right = p1;
    root->right = x1;
    p1->left = x2;

    p1->height = 1 + max(Height(p1->left),Height(p1->right));
    p2->height = 1 + max(Height(p2->left),Height(p2->right));
    root->height = 1 + max(Height(root->left),Height(root->right));

return p2;
}
node* Insert(struct node* root,int key)
{
    if(root == NULL)
    {
        root = new node();
        root->data = key;
        root->height = 1;
        root->left = root->right = NULL;
    }
    else if(root->data < key)
    {
        root->right = Insert(root->right,key);
    }
    else if(root->data > key)
    {
        root->left = Insert(root->left,key);
    }
    
    root->height = 1 + max(Height(root->left),Height(root->right));
    int balfac = (Height(root->left) - Height(root->right));

    if(balfac > 1 && root->left->data > key)
    {
        return LL(root);
        
    }
    if(balfac > 1 && key > root->left->data)
    {
        return LR(root);
    }
    if(balfac < -1 && key > root->right->data)
    {
        return RR(root);
    }
    if(balfac < -1 && key < root->right->data)
    {
        return RL(root);
    }

return root;
}
void Inorder(struct node* root)
{
    if(root != NULL)
    {
        
        cout<<root->data<<" ";
        Inorder(root->left);
        Inorder(root->right);
    }
}
int main()
{
    struct node* root;
    root = Insert(root,10);
    root = Insert(root,5);
    root = Insert(root,3);
    root = Insert(root,20);
    root = Insert(root,100);

    Inorder(root);
}
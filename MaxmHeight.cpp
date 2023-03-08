#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* Insert(struct node* root,int key)
{
    if(root == NULL)
    {
        root= new node();
        root->data = key;
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
    return root;
}
int MaxmHeight(struct node* root)
{
    int x,y,z;
    if(root != NULL)
    {
        x = MaxmHeight(root->left);
        y = MaxmHeight(root->right);
        // if(x > y)
        // {
        //     return x+1;
        // }
        // else
        // {
        //     return y+1;
        // }
        return (x>y) ?  x+1 : y+1;
    }
    else
    {
        return 0;
    }
    //return z;
}
void Inorder(struct node* root)
{
    if(root != NULL)
    {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}
int main()
{
    struct node* root;
    root = Insert(root,10);
    Insert(root,5);
    Insert(root,2);
    Insert(root,6);
    Insert(root,20);
    Insert(root,25);
    Insert(root,30);
    Insert(root,40);
    Insert(root,50);
    Inorder(root);
    cout<<endl;
    cout<<MaxmHeight(root);

}
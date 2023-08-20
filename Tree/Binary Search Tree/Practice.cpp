#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
struct node* p; 
node* Insert(struct node* root,int key)
{
    if(root == NULL)
    {
        root = new node();
        root->data = key;
        root->left = root->right = NULL;
        return root;
    }
    else
    {
        if(root->data > key)
        {
            root->left = Insert(root->left , key);
        }
        else if(root->data < key)
        {
            root->right = Insert(root->right ,key);
        }

    }
return root;
}
struct node* InorPre(struct node* root)
{
    while(root->right !=NULL)
    {
        p = root;
        root = root->right;
    }
    return root;
}
node* Deletion(struct node* root,int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data > key)
    {
        root->left = Deletion(root->left,key);
    }
    else if(root->data < key)
    {
        root->right = Deletion(root->right , key);
    }
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            return NULL;
            delete(root);
        }
        else if(root->left == NULL)
        {
            return root->right;
            delete(root);
        }
        else if(root->right == NULL)
        {
            return root->left;
            delete(root);
        }
        else
        {
            struct node* temp = InorPre(root->left);
            root->data = temp->data;
            root->left = Deletion(root->left,temp->data);
        }
    }
    return root;
}
void Inorder(struct  node* root)
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
    struct node* root = NULL;
    root = Insert(root,10);
    Insert(root,20);
    Insert(root,5);
    Insert(root,3);
    Insert(root,6);
    Insert(root,15);

    Inorder(root);printf("\n");
    Deletion(root,10);
    Inorder(root);

}
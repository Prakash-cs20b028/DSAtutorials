#include<iostream>
using namespace std;
struct node
{
    int data;
    node* lchild;
    node* rchild;
}*root = NULL;
void Insert(struct node* t,int key)
{
    struct node* p,*r;
    if(t==NULL)
    {
        p = new node();
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while(t!=NULL)
    {
        r = t;
        if(key < t->data)
        {
            t = t->lchild;
        }
        else
        {
            t = t->rchild;
        }
    }
    p = new node();
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(r->data < p->data)
    {
        r->rchild = p;
    }
    else
    {
        r->lchild = p;
    }

}
void Inorder(struct node* root)
{
    if(root!=NULL)
    {
        Inorder(root->lchild);
        cout<<root->data<<" ";
        Inorder(root->rchild);
    }
}
void Search(struct node* t,int key)
{
    if(t==NULL)
    {
        printf("Data is not found ");
    }
    if(t->data == key)
    {
        printf("Data %d is found.");
    }
    else if(t->data < key)
    {
        Search(t->rchild,key);
    }
    else
    {
        Search(t->lchild,key);
    }
   
}
void ItSearch(struct node* t,int key)
{
    if(t == NULL)
    {
        printf("data %d is not found ");
    }
    while(t!=NULL)
    {
        if(t->data == key)
        {
            printf("Key is found ");
            //return;  //this is very important concept because it returns just to the Function.
        }
        else if(t->data > key)
        {
            t = t->lchild;
        }
        else
        {
            t = t->rchild;
        }
    }
    if(t == NULL)
    {
        printf("data %d is not found ");
    }
}
int main()
{
    Insert(root,10);
    Insert(root,5);
    Insert(root,6);
    Insert(root,15);
    Insert(root,12);
    Insert(root,20);

    Inorder(root);
    cout<<endl;
    Search(root,10);
    cout<<endl;
    ItSearch(root,190);

}

//just return statement , where we use it will terminate the code and return to the main funcitn.

#include<iostream>
using namespace std;
struct node   //used for the tree nodes
{
    int data;
    node* lchild;
    node* rchild;
    
};
struct node* root = NULL;
struct node1    //this declaration is valid for queue.
{
    node1* next;
    node* data1;
};
node1* front = NULL;
node1* rear = NULL;

void enqueue(node* x)
{
    node1* t = new node1();
    if(t==NULL)
    {
        cout<<"Queue is full ";
    }
    else
    {
        t->data1 = x;
        t->next = NULL;
        if(front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
node* dequeue()   //we keep node* because we have to return it to the pointer p which was referring to root in tree
{
    node* x = NULL;
    struct node1* p;
    if(rear == NULL)    //most important part is this line b/c it spend my 3 hours to fix it.
    {
        return NULL;  
    }
    else
    {
        p = front;
        front = front->next;
        x = p->data1;
        delete p;
    }
    
    return x;
}
int isEmpty()
{
    int flag = 1;
    if(front == NULL)   //most important part is this line b/c it spend my 3 hours to fix it.
    {
        return -1;
    }
    return flag;
}

void TreeCreation()
{
    struct node *p,*t;
    int x;
    cout<<"Enter root node : ";
    root = new node();
    cin>>x;
    
    root->data = x;
    root->lchild = root->rchild = NULL;

    enqueue(root);
    while(isEmpty() != -1)
    {
        p = dequeue();
        cout<<"Enter left node of "<<p->data<<" : ";
        int x1;
        cin>>x1;
        if(x1 != -1)
        {
            
            t = new node();
            t->data = x1;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(t);
        }
        cout<<"Enter right node of "<<p->data<<" : ";
        int x2;
        cin>>x2;
        if(x2!=-1)
        {
            
            t = new node();
            t->data = x2;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(t);
        }
    }
    
}
void Inorder(struct node* root)
{
    if(root)
    {
        Inorder(root->lchild);
        cout<<root->data<<" ";
        Inorder(root->rchild);
    }
    
}
void Preorder(struct node* root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        Preorder(root->lchild);
        Preorder(root->rchild);
    }
    
}
void Postorder(struct node* root)
{
    if(root != NULL)
    {
        Postorder(root->lchild);
        Postorder(root->rchild);
        cout<<root->data<<" ";
    }
    
}
int main()
{
    TreeCreation();
    cout<<"Inorder traversal is : "<<endl;
    Inorder(root);
    cout<<endl;
    cout<<"Preorder traversal is : "<<endl;
    Preorder(root);
    cout<<endl;
    cout<<"Postorder traversal is : "<<endl;
    Postorder(root);

    return 0;
}

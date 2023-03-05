#include<iostream>
using namespace std;
struct node
{
    int data;
    node* lchild;
    node* rchild;
};
struct node1
{
    node1* next;
    node* data;
};
node1* front = NULL;
node1* rear = NULL;
node* enqueue(node* x)
{
    node1* t = new node1();
    if(t==NULL)
    {
        cout<<"Queue is full ";
    }
    else
    {
        t->data = x;
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
    return front->data;
}
void display(node1* p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main()
{
    struct node* root = new node();
    root->data = 100;
    root->lchild = root->rchild = NULL;
    cout<<enqueue(root);

    //display(root);
    return 0;
}
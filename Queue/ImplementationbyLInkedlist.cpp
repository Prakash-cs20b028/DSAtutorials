#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    //node* front;   either i declare here or outside the structure, the things are same.
    //node* rear;
    
};
struct node* front = NULL;  //these are the global pointers.
struct node* rear = NULL;

void enqueue(int x)
{
    struct node* t = new node();
    if(t == NULL)
    {
        printf("Queue is full ");
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
}
int dequeue()
{
    int x =-1;
    struct node* p;
    if(front == NULL)
    {
        printf("Queue is empty ");
    }
    else
    {
        p = front;
        front  = front ->next;
        x = p->data;
        delete (p);
    }
    return x;
}
void display()
{
    struct node* p = front;
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
int main()
{
    enqueue(50);
    enqueue(10);
    enqueue(15);
    display();
    cout<<dequeue();
}
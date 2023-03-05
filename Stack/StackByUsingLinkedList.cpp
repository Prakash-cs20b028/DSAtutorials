#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* top;
void push(int x)
{
    node* t;   
    t = new node();
    if(t == NULL)
    {
        cout<<"Stack is overflow ";
    }
    else
    {
        // t = new node();  this line is not be here it should be near where we have created t node.
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    int x = -1;
    struct node* p = top;
    if(top == NULL)
    {
        return -1;
    }
    else
    {
        top = top -> next;
        x = p->data;
        delete p;
    }
    return x;
}
int peek(int pos)
{
    struct node* p = top;
    for(int i = 0;i<pos-1 && p!=NULL;i++)
    {
        p = p->next;
    }
    if(p!=NULL)return p->data;  //here again we are checking value of p as null because in above for loop
    else return -1;      //it is chance that loop will break b/c of i<pos-1 that's the reason.
}
int stacktop()
{
    if(top !=NULL)
    {
        return top->data;
    }
    else
    {
        return -1;
    }
}
void isempty()
{
    if(top == NULL)
        cout<<"Stack is empty ";
    else
        cout<<"Stack is not empty ";
}
void isfull()
{
    node* t = new node;
    if(t == NULL)
        cout<<"Stack is full ";
    else
        cout<<"Stack is not full ";
}
void display()
{
    struct node* p = top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main()
{
    push(5);
    push(10);
    push(15);
    push(20);
    display();
    
    cout<<endl;
    cout<<"Popped value is "<<pop()<<endl;
    
    cout<<"peek value is "<<peek(2)<<" ";
    cout<<endl;
    cout<<"Top element of the stack is :" <<stacktop();
    cout<<endl;
    isempty();
    cout<<'\n';
    isfull();

}
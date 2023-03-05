#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* first = NULL;
void InsertLast(int x)
{
    struct node *t,*last;
    t = new node();
    t->data = x;
    t->next = NULL;
    if(first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;  //this is the same procedure as we have already implemented in the starting LL.
        last = t;      
    }
    
}
void display(struct node* p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main()
{ 
    //int x = 10;
    cout<<"See elements arranged in Linked List \n";
    //cin>>x;
    InsertLast(1);  //here be careful about the last node.
    InsertLast(5);
    InsertLast(15);
    InsertLast(30);
    display(first);
}
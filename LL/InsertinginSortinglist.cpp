#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;

};
struct node* first;
void creatlinkedlist(int arr[],int n)
{
    struct node *t,*p;
    first = new node();
    first->data = arr[0];
    first->next = NULL;
    p = first;
    for(int i = 1;i<n;i++)
    {
        t = new node();
        t->data = arr[i];
        t->next = NULL;
        p->next = t;
        p = t;

    }
}
void Insert(int ele)
{
    struct node *p,*q,*t;
    p = first; 
    t = new node();
    t->data = ele;
    t->next = NULL;
    while(p && p->data < ele)
    {   
        q = p;
        p = p->next;
        
    }
    if(p == first)   //this piece of line is used to concentrate about the first node.
    {
        t->next = first;    //also this line is used to pointing first pointer upon the first node.If we
        first = t;        //don't have empty.
    }
    else  //sometime we didn't observe else stmts as briefly but understand its meaning.
    {
        t->next = q->next;
        q->next = t;
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
    int arr[] = {10,20,30,40,50,60,80};
    int n = sizeof(arr)/sizeof(int);
    creatlinkedlist(arr,n);

    Insert(5);
    Insert(45);
    display(first);
}
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

void display()
{
    while(first != NULL)
    {
        cout<<first->data<<" ";
        first = first->next;
    }
}
void Insertion(int pos,int ele)
{
    struct node* p,*t;
    if(pos == 0)
    {
        t = new node();
        t->data = ele;
        t->next = first;
        first = t;
    }
    else if(pos > 0)
    {
        p = first;
        for(int i = 0;i<pos-1 && p!=NULL;i++)  //this for loop is used to point pointer p to the approriate posn.
        {
            p = p->next;
        }
        t = new node();
        t->data = ele;
        t->next = p->next;
        p->next = t;

    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,10};
    int n = sizeof(arr)/sizeof(int);
    creatlinkedlist(arr,n);

    Insertion(4,65);
    display();

}

/*

void InsertAtfirst(int ele)
{
    struct node* firstnode = new node();
    firstnode->data = ele;
    firstnode->next = NULL;

    firstnode->next = first;
    first = firstnode;

}
void InsertAtMiddle(int ele)
{
    struct node* middlen = new node();
    middlen->data = ele;
    middlen->next = NULL;

    struct node* p = first;
    int count = 0;
    while(p->next !=NULL)
    {
        count++;
        if(count == 7)
        {
           
            middlen->next = p->next;
            p->next = middlen;
        }
        else
        {
            p = p->next;
        }
    }
}
void InsertAtLast(int ele)
{
    struct node* lastnode = new node();//creating a new node that are taking value of ele and whose next is NULL.
    lastnode->data = ele;
    lastnode->next = NULL;

    struct node* p = first;
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = lastnode;
    lastnode->next = NULL;

}

*/
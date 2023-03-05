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
void Searching(struct node* p,int key)
{
    int flag = 0;
    while(p!=NULL)
    {
        if(p->data == key)
        {
            flag = 1;
            break;
        }
        else
        {
            p = p->next;
        }
    }
    if(flag == 1)
    {
        cout<<"Element is Present "<<" ";
    }
    else
    {
        cout<<"Element is not Present ";
    }
}
node* SearchingRecur(struct node* p,int key)
{
    if(p == NULL)
    {
        return NULL;
    }
    if(p->data == key)
    {
        return (p);
    }
    else
    {
        return SearchingRecur(p->next,key);
    }   
}
node* MoveNodeAtHead(struct node* p,int key)
{
    struct node* q=NULL;  //this pointer is created to follow p.
    while(p!=NULL)
    {
        if(p->data == key)
        {
            q->next = p->next;  //to point previous node to the next of p's node.
            p->next = first;   //to make first node p->next should point to the address of the first node.
            first = p;       //first will point to the p(first node).
            return p;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return NULL;
}
int main()
{
    int arr[] = {15,2,3,30,4,5,6,10};
    int n = sizeof(arr)/sizeof(int);
    creatlinkedlist(arr,n);
    int key = 6;
    Searching(first,key);
    cout<<endl;
    struct node* sec = SearchingRecur(first,key);
    if(sec !=0)
    {
        cout<<"Element is Found \n";
    }
    else
    {
        cout<<"Element is not found \n";
    }
    struct node* third = MoveNodeAtHead(first,key);
    if(third !=0)
    {
        cout<<third->data;
    }
    else
    {
        cout<<"Element is not found";
    }

}
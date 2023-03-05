#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
       
};
struct node* first = NULL;
void display(struct node* p)
{
    while(p!= 0)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
void creatlist(int arr[],int n)
{
    struct node* last,*t;
    first = new node();
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for(int i = 1;i<n;i++)
    {
        t = new node();
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int main()
{
    
    int arr[] = {2,4,6,8,10,20};
    
    int n = sizeof(arr)/sizeof(int);
    creatlist(arr,n);
    display(first);
    
}
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
void Sum(struct node* p)
{
    int sum = 0;
    while(p!=0)
    {
        sum = sum + p->data;
        p = p->next;
    }
    cout<<sum;
}
int SumRec(struct node* p)
{
    int sum = 0;
    if(p==0)
    {
        return 0;
    }
    else
    {
        
        return  sum + SumRec(p->next) + p->data;
    }
}
int main()
{
    int arr[] = {15,2,3,30,4,5,6,10};
    int n = sizeof(arr)/sizeof(int);
    creatlinkedlist(arr,n);
    Sum(first);
    cout<<" ";
    cout<<SumRec(first);
}
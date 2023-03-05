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
void Count(struct node* p)
{
    int count = 0;
    while(p !=NULL)  //we cann't use if because it will excute just only one time.
    {
        count +=1;
        p = p->next;
    }
    cout<<count<<" ";
}
int CountRecur(struct node* p)
{
    if(p == 0)
    {
        return 0;
    }   
    else   
    {
        return CountRecur(p->next)+1;
    }

}
int main()
{
    int arr[] = {15,2,3,30,4,5,6,10};
    int n = sizeof(arr)/sizeof(int);
    creatlinkedlist(arr,n);
    Count(first);
    cout<<endl;
    cout<<CountRecur(first);

}
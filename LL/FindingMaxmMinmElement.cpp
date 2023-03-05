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
void FindingMaxm(struct node* p)
{
    int max = INT_MIN;
    while(p)  //p should not be null
    {
        if(max < p->data)
        {
            max = p->data;
            p = p->next;
        }
        else
        {
            p = p->next;
        }
        
    }
    cout<<max;
}
int FindingMaxmRecur(struct node* p)
{
    int x = 0;
    if(p == 0)
    {
        return INT_MIN;
    }
    else
    {
        x = FindingMaxmRecur(p->next);
        if(x > p->data)
           return x;
        else
           return p->data;
    }
}
int FindingMinmRecur(struct node* p)
{
    int x = 0;
    if(p == 0)
    {
        return INT_MAX;
    }       
    else
    {
        x = FindingMinmRecur(p->next);
        if(x > p->data)
        {
            return p->data;
        }
        else
        {
            return x;
        }
    }
    
}
int main()
{
    int arr[] = {15,2,3,30,4,5,6,10};
    int n = sizeof(arr)/sizeof(int);
    creatlinkedlist(arr,n);
    FindingMaxm(first);
    cout<<endl;
    cout<<FindingMaxmRecur(first);
    cout<<endl;
    cout<<FindingMinmRecur(first);

}
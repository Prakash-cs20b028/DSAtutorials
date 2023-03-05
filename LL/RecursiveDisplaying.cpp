#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
       
};
node* CreatLL(int arr[],int n)
{
    struct node* t,*first,*last;  // last is using to connect link between the nodes.
    first = new node();        //where as first is used to creat just first node and left it.
    first->data = arr[0];    //whrere as t node is increasing the number of elelment.
    first->next = NULL;
    last = first;
    for(int i = 1;i<n;i++)
    {
        t = new node();
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = last->next;

    }
    return first;  //here first is the pointer to the first node.And actually what we want.
}
void display(struct node* p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        display(p->next);
    }
}
void display1(struct node* p)
{
    if(p!=NULL)
    {
        
        display1(p->next);
        cout<<p->data<<" ";
    }
}
int main()
{
    struct node* first1;

    int arr[] = {1,2,3,4,5,6,7,8,10};
    int n = sizeof(arr)/sizeof(int);
    first1 = CreatLL(arr,n);   //here we are taking just address of the first node.
    display(first1);
    cout<<endl;
    display1(first1); //this is reversing the list by using the recursion.
}

/*
Learning outcomes is that we created here first pointer in creatLL itself and we passed first node's address
to the main function. and it will be returned by node* creatLL()
if we would not created first pointer in the creatLL then we would have made globally first pointer.
*/
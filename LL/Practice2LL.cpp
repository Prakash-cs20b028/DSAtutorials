#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*first;
void CreatLL(int key)   //this part will be used everywhere we go to write a code.
{
    struct node* p,*q;
    q = new node();
    q->data = key;
    q->next = NULL;
    if(first == NULL)
    {
        first = p = q;
    }
    else
    {
        p->next = q;
        p = q;
    }
}
void InsertAtAnyPoint(int key,int pos)
{
    struct node* p,*t,*q;

    if(pos == 1)
    {
        p = new node();
        p->data = key;
        p->next = first;
        first = p;

    }
    else if(pos > 1)
    {
        
        p = first;
        q = NULL;
        for(int i = 0;i<pos-1;i++)
        {
            q = p;
            p = p->next;
        }
        t = new node();
        t->data = key;
        t->next = p;
        q->next = t;
    }

}
void InsertInSortedLL(int key)
{
    struct node* p = first;
    struct node* q,*t;
    q = NULL;
    while(p!=NULL)
    {
        if(p->data <= key)
        {
            q = p;
            p = p->next;
            
        }
        else
        {
            t = new node();
            t->data = key;
            q->next = t;
            t->next = p;
            break;         //if we will not keep here break then program will go in infinite loop b/c p remains at the same places for infiniteley times.
        }
    }    
        
    
}
void CheckLLSorted()
{
    struct node* p,*q;
    q = NULL;
    p = first;
    int flag = 1;
    while(p != NULL)
    {
        q = p;
        p = p->next;
        if(q->data > p->data)
        {
            flag = 0;
            break;
        }   
        else
        {
            flag = 1;
            
        }
        
    }
    if(flag == 0)
    {
        cout<<"list is not sorted ";
    }
    else 
    cout<<"list is sorted ";
    
}
void Display(struct node* first)
{
    while(first!=NULL)
    {
        cout<<first->data<<" ";
        first = first -> next;
    }
}

int main()
{
    CreatLL(10);
    CreatLL(20);
    CreatLL(203);
    CreatLL(50);
    Display(first);

    printf("\n");

    InsertAtAnyPoint(100,5);
    InsertAtAnyPoint(300,6);
    Display(first);

    printf("\n");

    InsertInSortedLL(30);
    Display(first);

    printf("\n");

    CheckLLSorted();

return 0;
}
#include<iostream>
using namespace std;
struct node
{
    int data;  //variable
    struct node* next;  //pointer variable     overall size of structure is 12 b/c nearly every pointer has have size of 8.

}*first;
// void CreatLL(int arr[],int n)
// {
//     struct node* last;
//     first = new node();
//     first->data = arr[0];
//     first->next = NULL;
//     last = first;

//     for(int i = 1;i<n;i++)
//     {
//         struct node* q = new node();
//         q->data = arr[i];
//         q->next = NULL;
//         last->next = q;
//         last = last->next;
//     }
    
// }
void CreatLL1(int key)
{
    struct node* t,*p;
    t = new node();
    t->data = key;
    t->next = NULL;

    if(first == NULL)
    {   
        first = p = t;
    }
    else
    {
        p->next = t;
        p = t;
    }
}
int CountRecur(struct node* p)
{
    if(p!=NULL)
    {
        int x = CountRecur(p->next);
        return x+1;
    }
    else
    {
        return 0;
    }
}
void DisplayLL()
{
    struct node* p = first;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
void Recurdisplay(struct node* p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        Recurdisplay(p->next);
    }
}
int SumElement(struct node* p)
{
    if(p == 0)
    {
        return 0;
    }
    else
    {
        //return SumElement(p->next) + p->data;
        int x = SumElement(p->next) + p->data;
        return x;
        
    }
    // int sum = 0;
    // while(p != NULL)
    // {
    //     sum = sum + p->data;
    //     p = p->next;
    // }
    // return sum;
}
int MaxmValue(struct node* p)
{
    int max = 0;
    while(p!=NULL)
    {
        if(p->data > max)
        {
            max = p->data;
            p = p->next;
        }
        else
        {
            p = p->next;
        }
    }
    return max;
}
void Searching(struct node* p,int key)
{
    int fre = 0;
    while(p!= NULL)
    {
        if(p->data == key)
        {
            fre++;
            break;
        }
        else
        {
            p = p->next;
        }
    }
    if(fre > 0)
    {
        cout<<"Element is found ";
    }
    else
    {
        cout<<"Element is not found ";
    }
}
int main()
{
    //struct node *first;  //if i am defining here then i will have to pass everywhere wherever it's require.
    int arr[] = {1,10,20,30,5,8};
    int n = sizeof(arr)/sizeof(int);

    // CreatLL(arr,n);
    // DisplayLL();

    CreatLL1(100);
    CreatLL1(20);
    CreatLL1(200);
    CreatLL1(50);
    CreatLL1(40);
    DisplayLL();


    cout<<endl;
    Recurdisplay(first);
    printf("\n");
    cout<<"Number of element in the list is "<<CountRecur(first)<<endl;
    cout<<"Sum of all element is "<<SumElement(first)<<endl;
    cout<<"Maximum value of Linked list is "<<MaxmValue(first)<<endl;
    Searching(first,25);

}
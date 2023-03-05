#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
       
};
void display(struct node* p)
{
    while(p!= 0)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main()
{
    //we are declaring pointer of struct node because we have to acces node's members.
    struct node* p;
    p = new node(); //now it will be pointing to a space where having two value one is data and other is next pointer.
    
    struct node* last;
    p->data = 10;
    p->next = NULL;
    last = p;
    cout<<"Enter data of each node \n";
    for(int i = 1;i<5;i++)
    {
        struct node* q = new node();
        int x;
        cin>>x;
        q->data = x;
        q->next = NULL;
        last->next = q;
        last = last->next;  //or this will be equal to like last = q;
        
    }
    display(p);

}
/*
int *p so we cann't use integer or any data type pointers except struct node.
p = new node();    //now p will be pointing to a space where having two value one is data and other is next pointer.

Overall idea is that i am creating a pointer p,q and last.
p is just using to point first node and after that last is folloing the first node where p is still pointer
which is pointing to the first node.Where last pointer will move from p to q.
q will creat node(data + next) assign some value and make next as NULL. 
after that last->next = q; and last = q;
In this way q will creat node and last will follow him.
*/
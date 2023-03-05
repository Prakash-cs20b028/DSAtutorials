#include<iostream>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void enqueue(struct Queue *q,int x)
{
    if(q->rear == q->size)
    {
        printf("Queue is full ");
    }
    else
    {
        q->rear ++;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct Queue *q)
{
    int x = -1;
    if(q->rear == -1)
    {
        cout<<"Queue is empty ";
    }
    else
    {
        q->front++;
        x = q->Q[q->front] ;

    }
    return x;
}
void isfull(struct Queue q)
{
    if(q.rear == q.size-1)
    {
        cout<<"Queue is full \n";
        
    }
    else
    {
        printf("Queue is not full \n");
        
    }
}
void isempty(struct Queue q)
{
    if(q.rear == q.front)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Queue is not empty \n");
    }
}
void display(struct Queue q)
{
    while(q.front < q.rear)
    {
        q.front++;
        cout<<q.Q[q.front]<<" ";
        
    }
}
int main()
{
    struct Queue q;
    cout<<"Enter size of queue : ";
    cin>>q.size;
    q.front = q.rear = -1;
    q.Q= new int(q.size);
    enqueue(&q,5);
    //enqueue(&q,15);
    //enqueue(&q,25);
    //enqueue(&q,50);
    display(q);
    cout<<'\n';
    cout<<"first deleted value is "<<dequeue(&q);  //we are passing address b/c q is not a pointer
    cout<<'\n';
    cout<<"second deleted value is "<<dequeue(&q);
    cout<<'\n';
    isfull(q);
    isempty(q);
}

/*
  queue is following first in first out that is whatever will come at last will not be out firt .whatever
  has come in the front time that will removed.

*/
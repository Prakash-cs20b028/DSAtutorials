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
    if((q->rear+1)% q->size == q->front)
    {
        printf("Queue is full ");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x; 
    }
}
int dequeue(struct Queue *q)
{
    int x = -1;
    if(q->front == q->rear)
    {
        printf("Queue is empty ");
    }
    else
    {
        q->front = (q->front + 1)% q->size;
        x = q->Q[q->front];
    }
    return x;
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
    q.front = q.rear = 0;

    //enqueue(&q,5);
    enqueue(&q,10);
    enqueue(&q,25);
    enqueue(&q,100);

    display(q);
    cout<<endl;
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q);
    cout<<" ";
    enqueue(&q,500);
    display(q);
}
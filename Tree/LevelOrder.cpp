#include<iostream>
using namespace std;
struct node
{
    int data;
    node* lchild;
    node* rchild;
};
struct node* root = NULL;
struct Queue
{
    int front;
    int rear;
    int size;
    node* *S;
};
void ConstructQueue(struct Queue *q)
{
    cout<<"Enter size of queue ";
    cin>>q->size;
    q->front = q->rear = 0;
    q->S = new node*[q->size];
}
int isEmpty(struct Queue * q)
{
    int x = 1;
    if(q->front == q->rear)
    {
        return -1;
    }
    else
    return x;
}
node* dequeue(struct Queue *q)
{
    node* x = NULL;
    if(q->front == q->rear)
    {
        return NULL;
    }
    else
    {
        q->front++;
        x = q->S[q->front];
    }
    return x;
}
void enqueue(struct Queue *q,node* x)
{
    if(q->rear == q->size -1)
    {
        cout<<"Queue is full ";
    }
    else
    {
        q->rear ++;
        q->S[q->rear] = x;
    }
}
void TreeCreation(struct Queue* q)
{
    struct node *p,*t;
    cout<<"Enter root's value ";
    root = new node();
    int x;
    cin>>x;
    root->data = x;
    root->lchild = root->rchild = NULL;

    enqueue(q,root);
    while(isEmpty(q) != -1)
    {
        p = dequeue(q);
        cout<<"Enter left node of "<<p->data<<" ";
        cin>>x;
        if(x !=-1)
        {
            t = new node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(q,t);
        }
        cout<<"Enter right node of "<<p->data<<" ";
        cin>>x;
        if(x !=-1)
        {
            t = new node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(q,t);
        }
    }
}
void LeverOrder(struct node* t)
{
    struct Queue q1;
    struct node* p;
    ConstructQueue(&q1);
    cout<<t->data<<" ";
    enqueue(&q1,t);
    while(isEmpty(&q1) != -1)
    {
        p = dequeue(&q1);
        if(p->lchild != NULL)
        {
            cout<<p->lchild->data<<" ";
            enqueue(&q1,p->lchild);
        }
        if(p->rchild != NULL)
        {
            cout<<p->rchild->data<<" ";
            enqueue(&q1,p->rchild);
        }
    }
}
int main()
{
    struct Queue q;
    ConstructQueue(&q);
    TreeCreation(&q);
    LeverOrder(root);
}
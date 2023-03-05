#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* lchild;
    struct node* rchild;

};
struct node* root = NULL;
struct Queue
{
    int size;
    int front;
    int rear;
    node* *Q;
};
int isEmpty(struct Queue *q)
{
    int x = 1;
    if(q->front == q->rear)
    {
        return -1;
    }
    else
    return x;
}
void enqueue(struct Queue *q,node* x)
{
    if(q->rear == q->size - 1)
    {
        cout<<"Queue is full ";
    }
    else
    {       
        q->rear ++;
        q->Q[q->rear] = x;    
    }
    
}

node* dequeue(struct Queue *q)
{
    struct node* x = NULL;
    if(q->rear == q->front)
    {
        return NULL;
    }
    else
    {   
        q->front ++;
        x = q->Q[q->front];
        
    }
    return x;
}
void TreeCreation(struct Queue *q)
{
    
    //create(&q,100);
    struct node* p,*t;
    int x;
    root = new node();
    cout<<"Enter root's data ";
    cin>>x;
    root->data = x;
    root->lchild = root->rchild = NULL;

    enqueue(q,root);
    while(isEmpty(q) != -1)
    {
        p = dequeue(q);
        cout<<"Enter left node of "<<p->data<<" ";
        cin>>x;
        if(x != -1)
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
void Inorder(struct node* root)
{
    if(root)
    {
        Inorder(root->lchild);
        cout<<root->data<<" ";
        Inorder(root->rchild);
    }
}
int main()
{
    struct Queue q;  //line number 107 to 110 represent initialisation of queue.
    q.size = 50;
    q.front = q.rear = 0;
    q.Q = new node*[q.size];
    TreeCreation(&q);
    Inorder(root);
}

/*
void create(struct Queue *q,int size1)
{
    //cout<<"Enter size ";
    q->size = size1;
    q->front=q->rear= 0;
    q->Q=(struct node **)malloc(q->size*sizeof(struct node *));

}
*/
    
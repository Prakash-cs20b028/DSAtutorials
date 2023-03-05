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
struct Stack
{
    int top;
    int size;

    node* *S;

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
node* pop(struct Stack *st)
{
    node* x = NULL;
    if(st->top == -1)
    {
        cout<<"Stack is empty ";
    }
    else
    {
        x = st->S[st->top];
        st->top --;
    }
    return x;
}
void push(struct Stack *st,node* x)
{
    if(st->top == st->size - 1)
    {
        cout<<"Stack is full ";
    }
    else
    {
        st->top ++;
        st->S[st->top] = x;
    }
}
int isEmptyStack(struct Stack *st)
{
    int x = 1;
    if(st->top == -1)
    {
        return -1;
    }
    else
    return x;
}
void Preorder(struct Stack *st,struct node *t)
{
    while(t!=NULL || isEmptyStack(st) !=-1)
    {
        if(t !=NULL)
        {
            push(st,t);
            cout<<t->data<<" ";
            t = t->lchild;
        }
        else
        {
            t = pop(st);
            t = t->rchild;
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
void CreatStack(struct Stack *st)
{
    cout<<"Enter size of Stack ";
    cin>>st->size;
    st->top = -1;
    st->S = new node* [st->size];
}
int main()
{
    struct Queue q;  //line number 107 to 110 represent initialisation of queue.
    q.size = 50;
    q.front = q.rear = 0;
    q.Q = new node*[q.size];
    TreeCreation(&q);
    
    cout<<endl;
    struct Stack st;
    CreatStack(&st);
    cout<<"Preorder iterative traversal : \n";
    Preorder(&st,root);
}
    
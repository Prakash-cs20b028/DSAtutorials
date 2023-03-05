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
    node* data1;
    Queue* next;
};
struct Stack
{
    int top;
    int size;
    node* *S;
};
struct Queue * front = NULL;
struct Queue * rear = NULL;
int isEmpty()
{
    int x = 1;
    if(front == NULL)
    {
        return -1;
    }
    else
    return x;
}
void enqueue(node* x)
{
    Queue* t = new Queue();
    if(t == NULL)
    {
        cout<<"Queue is full ";
    }
    else
    {
        t->data1 = x;
        t->next = NULL;
        if(front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
node* dequeue()
{
    struct Queue* p;
    node* x = NULL;
    if(front == NULL)
    {
        return NULL;
    }
    else
    {
        p = front;
        front = front->next;
        x = p->data1;
        delete p;
    }
    return x;
}
void CreatTree()
{
    struct node* p,*t;
    int x;
    cout<<"Enter root's data ";
    cin>>x;
    root = new node();
    root->data = x;
    root->lchild = root->rchild = NULL;

    enqueue(root);
    while(isEmpty() != -1)
    {
        p = dequeue();
        printf("Enter left node of %d ",p->data);
        cin>>x;
        if(x !=-1)
        {
            t = new node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(t);
        }
        printf("Enter left node of %d ",p->data);
        cin>>x;
        if(x !=-1)
        {
            t = new node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(t);
        }
    }
}
int isStackEmpty(struct Stack *st)
{
    int x = 1;
    if(st->top == -1)
    {
        return -1;
    }
    else
    return x;
}
void push(struct Stack *st,node* x)
{
    if(st->top == st->size -1)
    {
        cout<<"Stack is full ";
    }
    else
    {
        st->top ++;
        st->S[st->top] = x;
    }
}
node* pop(struct Stack *st)
{
    node* x = NULL;
    if(st->top == -1)
    {
        return NULL;
    }
    else
    {
        x = st->S[st->top];
        st->top --;

    }
    return x;
}
void Inorder(struct Stack *st,struct node* t)
{
    while(t!=NULL || isStackEmpty(st) != -1)
    {
        if(t!= NULL)
        {
            push(st,t);
            t = t->lchild;
        }
        else
        {
            t = pop(st);
            cout<<t->data<<" ";
            t = t->rchild;
        }
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
    struct Queue q;   //in linked list no need to creat as we creat in using array.
    CreatTree();
    struct Stack st;
    CreatStack(&st);
    Inorder(&st,root);
    
}
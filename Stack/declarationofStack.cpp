#include<iostream>
using namespace std;
struct Stack
{   //Stack needs three parameter data,top and one pointer to creat array as dynamically.
    int size;
    int top;
    int *s;
};
void CreatStack(struct Stack *st)  //here we need to create Stack separately.Just took size, top = -1 and one array.
{
    cout<<"Size of Stack ";
    cin>>st->size;
    st->top = -1;
    st->s = new int(st->size);
}
void Push(struct Stack *st,int n)
{

    if(st->top == st->size-1)
    {
        cout<<"Stack is overflow \n";
    }
    else
    {
        st->top ++;
        st->s[st->top] = n;
        
    }
    
}
int Pop(struct Stack *st)
{
    int x = -1;
    if(st->top == -1)
    {
        return -1;
    }
    else
    {
        x = st->s[st->top];
        st->top --;
    }
    return x;
}
int top(struct Stack st)
{
    if(st.top == -1)
        return -1;
    else
        return st.s[st.top];
}
void isEmpty(struct Stack st)
{
    if(st.top == -1)
    {
        cout<<"Stack is empty ";
    }
    else
        cout<<"Stack is non empty ";
}
void isFull(struct Stack st)
{
    if(st.top == st.size-1)
    {
        cout<<"Stack is Full ";
    }
    cout<<"Stack is not full ";
}
void display(struct Stack st)
{
    while(st.top != -1)
    {
            cout<<st.s[st.top]<<" ";
            st.top --;
        
    }
}
int main()
{
    struct Stack st;   //it is just a variable.
    
    CreatStack(&st);

    Push(&st,5);
    Push(&st,10);
    Push(&st,15);
    Push(&st,25);
    display(st);

    cout<<endl;
    cout<<"Poped element is : " << Pop(&st)<<endl;
    //cout<<"Poped element is \n" << Pop(&st)<<endl;
    
    cout<<"Top element is : "<<top(st)<<endl;
    isEmpty(st);
    cout<<endl;
    isFull(st);
}
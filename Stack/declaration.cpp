#include<iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;  //used for creating array dynamically.
};
struct stack st;
void create(struct stack *st)
{
    printf("Enter size of the stack : ");
    cin>>st->size;
    st->top = -1;
    st->s = new int(st->size);
}
void push(struct stack *st,int x)
{
    if(st->top == st->size -1)
        cout<<"Stack is overflow";
    else
    {
        st->top ++;
        st->s[st->top] = x;
    }
       
        
}
void display(struct stack st)
{
    while(st.top != -1)
    {
        cout<<st.s[st.top]<<" ";
        st.top --;
    }
}
int main()
{
    create(&st);
    push(&st,1);
    push(&st,10);
    display(st);
}
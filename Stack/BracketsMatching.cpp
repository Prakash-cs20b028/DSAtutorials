#include<iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    char *s;
};
int isempty(struct stack st)
{
    if(st.top == -1)
        return 1;
    else
        return 0;
}
void push(struct stack *st,char ch,int n)
{
    if(st->top == n-1) cout<<"Stack is full ";
    else
    {
        st->top ++;
        st->s[st->top] = ch;
    }
}
void pop(struct stack *st)
{
    char x = -1;
    if(st->top == -1)
        cout<<"Stack is empty ";
    else
    {
        x = st->s[st->top];
        st->top --;
    }
    
}
int isBalance(char *exp,int n)
{
    int x = -1;
    struct stack st;
    st.size = n;
    st.top = -1;
    st.s = new char(st.size);   //creating stack of an char.

    for(int i = 0;exp[i] !='\0';i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') 
            push(&st,exp[i],n-1);
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']') 
        {
            if(isempty(st)) 
                return 0;
            if(st.top - exp[i] <= 2)
                pop(&st);               
            else 
                return 0;
        }
    
    }
    if(isempty(st)) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}
int main()
{
    
    char ch[] = "[{(a+b)*(b+c)]";   //represting a string.
    int n = sizeof(ch)/sizeof(char);
    cout<<n<<endl;
    
    if(isBalance(ch,n))
    {
        cout<<"parenthesis is matching ";
    }
    else
    {
        cout<<"parenthesis is not matching ";
    }

return 0;
}
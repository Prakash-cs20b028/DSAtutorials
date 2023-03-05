#include<iostream>
#include <cstring>
using namespace std;
struct node 
{
    char data;
    node* next;

};
struct node* top = NULL;
void push(char x)
{
    struct node* t = new node();
    if(t == NULL)
    {
        cout<<"Stack is full ";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
char pop()
{
    char x;
    struct node* p = top;
    if(top == NULL)
    {
        cout<<"Stack is empty ";
    }
    else
    {
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}
char stacktop()
{
    struct node* p = top;
    if(top == NULL)
    {
        return 0;
    }
    else
    {
        return p->data;
    }
}
int isPre(char ch)
{
    if(ch == '+' || ch=='-')
    {
        return 1;
    }
    else if(ch == '*' || ch == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int isOperand(char ch)
{
    if(ch == '+' || ch =='-' || ch == '*' || ch == '/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
char * Convert(char *infix)
{
    int n = strlen(infix);
    char *postfix = new char(n+3);
    int i=0,j=0;
   
    while(infix[i] !='\0')
    {
        if(isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if(isPre(infix[i]) > isPre(top->data))
            {
                push(infix[i++]);
            }
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while(top !=NULL)
    {
        postfix[j++] = pop();
        
    }
    postfix[j] ='\0';

    return postfix;
}
int main()
{
    char ch[] = "a+b*c-d/e";
    push('@');
    int n= strlen(ch);
    char *res = Convert(ch);
    
    cout<<res;
}
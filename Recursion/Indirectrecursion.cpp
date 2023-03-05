#include<iostream>
using namespace std;
// Indirect recursion is called when functions call other functions and that makes a circular loop among them.

void fun2(int n);    //this is the global declaration of fun2.

void fun1(int n)
{
    if(n>0)
    {
        printf("%d ", n);
        fun2(n-1);
    }
}
void fun2(int n)
{
    if(n>1)
    {
        fun1(n/2);
        printf("%d ", n);
        
    }
}
int main()
{
    int x = 20;
    fun2(x);
    cout<<endl;
    //fun2(x);
}
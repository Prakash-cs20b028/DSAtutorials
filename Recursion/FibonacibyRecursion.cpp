#include<iostream>
using namespace std;
//this algo takes pow(2,n) where as iterative version takes n time.

int fib(int n)
{
    if(n<=1)
    return n;
    else
    {
        return fib(n-2) + fib(n-1);
    }
}
//we can declare this F[10] in the main function too.
int F[10] = {-1,-1,-1,-1,-1,-1,-1};  //if i declare size as 10 and we are initialising with size of 8 only then it will assume 0
//for rest of the element.
int fib1(int n)
{
    if(n<=1)
    {
        return n;
        F[n] = n;
    }
    else
    {
        if(F[n-2] == -1)
        {
            F[n-2] = fib1(n-2);
        }
        if(F[n-1] == -1)
        {
            F[n-1] = fib1(n-1);
        }
        return F[n-2] + F[n-1];
    }
}
int main()
{
    int n = 7;
    cout<<fib(n);
    cout<<endl;
    cout<<fib1(n);
}
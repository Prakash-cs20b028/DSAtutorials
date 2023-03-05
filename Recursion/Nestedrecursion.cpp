#include<iostream>
using namespace std;

//here in fun, we wil go further if insider function will return its value.and one thing is happening that either we give any input its 
//value is 91 only. How ??
//If we make fun as void then it will not perform well. It shows errors.
int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11));
    }
}
int main()
{
    int x = -1;
    cout<<fun(x);
}
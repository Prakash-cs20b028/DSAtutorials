#include<iostream>
using namespace std;
int factbyrecursion(int n)   //this is done by recursion method
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
       return factbyrecursion(n-1) * n;
    }
}
int factbyiteration(int n)   //this is done by iteration method
{
    int sum = 1;
    for(int i = 1;i<=n;i++)
    {
        sum = sum * i;
    }
    return sum;
}
int main()
{
    int n = 5;

    cout<<factbyrecursion(n);
    cout<<endl;
    cout<<factbyiteration(n);
}
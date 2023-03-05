#include<iostream>
using namespace std;
int pow(int m , int n)   //number of call is n + 1 and number of multiplication is n + 1
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return pow(m,n-1) * m;
    }
}
int pow1(int m,int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n % 2 == 0)
    {
        return pow1(m*m,n/2);
    }
    else
    {
        return m* pow1(m*m,(n-1)/2);
    }
}
int main()
{
    int m = 2;
    int n = 9;
    cout<<pow(2,9)<<endl;
    cout<<pow1(m,n);
}
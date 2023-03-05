#include<iostream>
using namespace std;
int fact(int n)
{
    if(n == 0)
    return 1;
    else
    {
        return fact(n-1) * n;
    }
}
int Comb(int n,int r)
{
    int t1 = fact(n);
    int t2 = fact(r);
    int t3 = fact(n-r);

    return t1/(t2 * t3);
}
int Comb1(int n , int r)
{
    if(r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return Comb1(n-1,r-1) + Comb1(n-1,r);
    }
}
int main()
{
    cout<<Comb(5,2)<<endl;
    cout<<Comb1(6,2);
}
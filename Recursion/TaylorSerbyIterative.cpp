#include<iostream>
using namespace std;
double e(int x,int n)
{
    double s = 1;
    double p = 1;
    double f = 1;

    for(int i = 1;i<n;i++)
    {
        p = p * x;
        f = f * i;
        s = s + p/f;
    }
    return s;
}
int main()
{
    cout<<e(2,10);
}
#include<iostream>
using namespace std;
int SumOfNatural(int n)
{  
    if(n>0)
    {
        return SumOfNatural(n-1) + n;
    }     
    else
    {
        return 0;
    }  
}
int main()
{
    int x = 0;
    cin>>x;
    cout<<SumOfNatural(x);
}
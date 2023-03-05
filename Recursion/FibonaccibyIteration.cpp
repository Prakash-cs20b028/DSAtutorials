#include<iostream>
using namespace std;
void Series(int n0,int n1,int term)
{
    int n2 = 0;
    cout<<n0<<" "<<n1<<" ";
    for(int i = 2;i<=term;i++)
    {
        n2 = n0 + n1;
        n0 = n1;
        n1 = n2;
        cout<<n2<<" ";
    }
    
}
int main()
{
    int n0 = 0;
    int n1 = 1;
    Series(n0,n1,7);
}
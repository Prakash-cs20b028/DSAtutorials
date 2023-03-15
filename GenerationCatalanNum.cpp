#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    int sum = 0;
    int cat[n];
    cat[0] = cat[1] = 1;
    for(int i=2;i<=n;i++)
    {
        
        for(int j = 0;j<i;j++)
        {
            sum = sum +  (cat[j] * cat[i-1-j]);
            
        }
        cat[i] = sum;
        sum = 0;
    }
    for(int j = 1;j<=n;j++)
    {
        cout<<cat[j]<<" ";
    }
return 0;
}
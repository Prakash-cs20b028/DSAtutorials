#include<iostream>
using namespace std;

int fun(int W,int *wt,int *val,int n)
{
    //base condition
    if(W==0 || n==0)
    {
        return 0;
    }
    //choise condition
    if(wt[n-1]<=W)
    {
        return max(val[n-1]+fun(W-wt[n-1],wt,val,n-1), fun(W,wt,val,n-1));
    }
    else
    {
        return fun(W,wt,val,n-1);
    }
    
}
int main()
{
    int wt[] = {1,2,3};
    int value[] = {4,5,1};
    int n=sizeof(wt)/sizeof(int);
    int W=3;
    cout<<fun(W,wt,value,n);
    return 0;
}
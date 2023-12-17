#include<iostream>
#include<cstring>
using namespace std;

int mat[1001][1001];
int fun(int W,int *wt,int *val,int n)
{
    //base condition
    if(W==0 || n==0)
    {
        return 0;
    }
    else if(mat[n][W] != -1)
    {
        return mat[n][W];
    }
    //choise condition
    else if(wt[n-1]<=W)
    {
        return mat[n][W] = max(val[n-1]+fun(W-wt[n-1],wt,val,n-1), fun(W,wt,val,n-1));
    }
    else
    {
        return mat[n][W] = fun(W,wt,val,n-1);
    }
    
}
int main()
{
    int wt[] = {4,5,1};
    int value[] = {1,2,3};
    int n=sizeof(wt)/sizeof(int);
    int W=4; 

    memset(mat,-1,sizeof(mat));
    
    
    cout<<fun(W,wt,value,n);
    return 0;
}
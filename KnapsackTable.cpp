#include<iostream>
#include<cstring>
using namespace std;

int mat[1001][1001];
int fun(int W,int *wt,int *val,int n)
{
    //base condition
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<W+1;j++)
        {
            if(i==0 or W==0)
            {
                mat[i][j] =0;
            }
        }
    }
    //choise condition
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<W+1;j++)
        {
            if(wt[i-1]<=j)
            {
                mat[i][j] = max((val[i-1]+mat[i-1][j-wt[i-1]]),mat[i-1][j]);
            }
            else
            {
                mat[i][j] = mat[i-1][j];
            }
        }
    }
    return mat[n][W];
    
}

int main()
{
    int wt[] = {4,5,1};
    int value[] = {1,2,3};
    int n=sizeof(wt)/sizeof(int);
    int W=4; 
    
    cout<<fun(W,wt,value,n);
    return 0;
}
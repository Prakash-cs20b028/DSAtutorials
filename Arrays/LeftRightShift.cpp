#include<iostream>
using namespace std;
void leftshift(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = 0;
    
}
void rightshift(int arr[],int n)
{
    for(int i = n-1;i>=0;i--)
    {
        arr[i] = arr[i-1];
    }
}
void display(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    leftshift(arr,n);
    display(arr,n);
    cout<<endl;
    rightshift(arr,n);
    display(arr,n);
}
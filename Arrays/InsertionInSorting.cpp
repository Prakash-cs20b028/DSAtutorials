#include<iostream>
using namespace std;

void CheckSorting(int arr[],int n)
{
    bool flag = false;
    for(int i = 0;i<n-1;i++)
    {
        if(arr[i] <= arr[i+1])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout<<"Array is sorted ";
    }
    else
    {
        cout<<"Array is not sorted ";
    }
}
void Insert(int arr[],int n,int ele)
{
    int ans  = 0;
    for(int i = 0;i<n;i++)
    {
        if(ele < arr[i])
        {
            ans = i;  //we got index of inserting that element. 
            break;
        }
        else
        {
            ans = n;
        }
    }
    for(int i = n;i>ans;i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[ans] = ele;
    n++;
}
void Insert2(int arr[],int n,int ele)
{
    
    for(int i = n-1;i>=0;i--)
    {
        if(ele < arr[i])
        {
            arr[i+1] = arr[i];
            
        }
        else
        {
            arr[i+1] = ele;
            break;
        }
    }
    
}
void Display(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,3,5,9,12,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    CheckSorting(arr,n);
    cout<<endl;
    int ele = 200;
    Insert(arr,n,ele);
    Display(arr,n+1);

    int ele1 = 15;
    Insert2(arr,n,ele1);
    
    Display(arr,n+1);
}
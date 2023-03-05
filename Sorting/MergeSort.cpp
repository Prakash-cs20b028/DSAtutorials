#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Merge(int arr[],int l,int mid,int h)
{
    int i = l,j = mid+1,k = l;   //i = 0,j = 1, k = 0,mid = 0, h = 1
    int arr1[100];
    //cout<<l<<" "<<mid<<" "<<h<<endl;
    while(i<=mid && j<=h)     //careful about condition.
    {
        if(arr[i] < arr[j])
        {
            arr1[k++] = arr[i++];
        }
        else
        {
            arr1[k++] = arr[j++];
        }
    }
    for(;i<=mid;i++)
    {
        arr1[k++] = arr[i];
    }
    for(;j<=h;j++)
    {
        arr1[k++] = arr[j];
    }
    //now i finally compying sorted element into the original array.
    for(i = l;i<=h;i++)
    {
        arr[i] = arr1[i];
    }

}
void printarr(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void IterativeMerge(int arr[],int n)
{
    int p,l,h,mid;
    for(p = 2; p<=n;p =p*2)   //this line is used for t.c as log(n).
    {
        int i;
        for(i = 0;i+p-1<n;i = i+p)  //this line is used for taking num of element at a time as 0,1 (2,3),(4,5)..
        {
            l = i;
            h = i+p-1;
            mid = (l+h)/2;
            Merge(arr,l,mid,h);
             //printarr(arr,h+1);
        }
        if(n-i > p/2)   //we could put condition as (n>i)
        {                //this line of code is used to sort element after 7 and it will sort.but we didn't add
            l = i;          // till now that's why we are adding one piece of code after this for loop.
            h = i+p-1;
            mid = (l+h)/2;
            Merge(arr,l,mid,n-1);
        }
    }
    if(p/2 < n)   //finally i am sorting all rest of element too which were not sorted in the for loop.
    {
        Merge(arr,0,p/2-1,n-1);
    }
}
// void RecursiveMerge(int arr[],int l,int h)
// {
//     if(l < h)
//     {
//         int mid = (l + h)/2;
        
//         RecursiveMerge(arr,l,mid);
//         RecursiveMerge(arr,mid+1,h);
//         Merge(arr,l,mid,h);
//     }
// }
int main()
{
    int arr[] = {100,500,2,8,1,10,11};
    int n = sizeof(arr)/sizeof(int);

    IterativeMerge(arr,n);
    //RecursiveMerge(arr,0,n-1);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
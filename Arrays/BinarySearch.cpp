#include<iostream>
#include <iostream>
using namespace std;
int BinarySearchRecursively(int arr[],int l,int h,int key)
{   
if(l<=h)
{
    int mid = (l+h)/2;
    if(arr[mid] == key)
    {
        return mid;
    }
    else if(key < arr[mid])
    {
        return BinarySearchRecursively(arr,l,mid-1,key);
    }
    else
    {
        return BinarySearchRecursively(arr,mid+1,h,key);
    }
}
else
{
    return -1;
}
}
int BinarySearch(int arr[],int l,int h,int key)
{
    while(l<=h)
    {
        int mid = (l + h)/2;
        if(key == arr[mid])
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    
    int arr[] = {1,4,7,9,10,20,50};
    int len = sizeof(arr)/sizeof(arr[0]);

    int key = 10;
    cout<<BinarySearch(arr,0,len-1,key)<<endl;
    int key1 = 50;
    cout<<BinarySearchRecursively(arr,0,len-1,key1);

return 0;
}
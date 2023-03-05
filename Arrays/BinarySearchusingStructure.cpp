#include<iostream>
using namespace std;
struct BinarySearch
{
    int A[10];
    int len;
    int size;
};
int binarysearchrecursive(int arr[],int l, int h,int key)
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
            return binarysearchrecursive(arr,l,mid-1,key);
        }
        else
        {
            return binarysearchrecursive(arr,mid+1,h,key);
        }
    }
    else
    {
        return -1;
    }
}
int binarysearch(struct BinarySearch arr,int l,int h,int key)
{
    
    if(l<=h)   //here we can use while loop also .
    {   
        int mid = (l+h)/2;
        if(arr.A[mid] == key)
        {
            return mid;
        }
        else if(key < arr.A[mid])
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
    struct BinarySearch arr = {{1,3,5,7,8,9},6,10};

    int key = 5;
    cout<<binarysearch(arr,0,5,key)<<endl;

    int key1 = 9;
    cout<<binarysearchrecursive(arr.A,0,arr.len-1,key1);
}
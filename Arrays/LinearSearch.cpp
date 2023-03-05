#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void LinearSearch(int arr[],int len,int key)
{
    int val = -1;
    for(int i = 0;i<len;i++)
    {
        if(arr[i] == key)
        {
            swap(&arr[i],&arr[i-1]);
            val = i-1;
        }
    }
    for(int i = 0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(val >= 0)
    {
        cout<<"Element is fount at index "<<val;
    }
    else
    {
        cout<<"Element is not found ";
    }
}
int main()
{
    int arr[] = {1,2,3,10,60,8};
    int len = sizeof(arr)/sizeof(arr[0]);

    
    //cout<<len;
    int key = 60;
    LinearSearch(arr,len,key);


}
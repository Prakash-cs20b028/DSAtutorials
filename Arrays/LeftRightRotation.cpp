#include<iostream>
using namespace std;
void leftrotation(int arr[],int n)  //array is passed by address.So, if i change here then it will reflect in main.
{
    int a = arr[0];
    for(int i = 0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = a;
    
}
void rightrotation(int arr[],int n)
{
    int a = arr[n-1];
    for(int i = n-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = a;
}
void display(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Simple printing "<<endl;
    display(arr,n);
    cout<<"After right rotation "<<endl;
    rightrotation(arr,n);
    display(arr,n);
    cout<<"After left rotation "<<endl;
    leftrotation(arr,n);
    display(arr,n);

}
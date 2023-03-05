#include<iostream>
#include<stdio.h>
using namespace std;

void insert(int arr[],int len,int key) //insertion at last position.
{
    arr[len] = key;  //if we insert one element then its size will increase by one.

}
void insertinbetween(int arr[],int len,int index,int val)
{
    
    for(int i = len;i>index;i--)  //this for loop will give one vacant place at the index.wherein i will keep val
    {
        arr[i] = arr[i-1];  
    }
    arr[index] = val;
    len++;
}
void Deletion(int arr[],int len, int index)
{
    for(int i = index;i<len;i++)
    {
        arr[i] = arr[i+1];   //here don't write arr[i++]
    }
    len--;
}
void display(int arr[],int len)
{
    for(int i = 0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {5,6,7,10};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<len<<endl;
    display(arr,len);
    cout<<endl;
    //write code to insert an element at the last position.
    insert(arr,len,500);  // arr is passing by values.
    len++;
    display(arr,len);

    cout<<endl;
    
    insertinbetween(arr,len,2,200);
    len++;
    display(arr,len);

    cout<<endl;
    Deletion(arr,len,3);
    len--;   //we are using len-- because deletion fun will not decrease arr size because we have passed by value.
    display(arr,len);

}
#include<iostream>
using namespace std;

void swap(int *a,int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void bubbleSort(int arr[], int n)
    {
         for(int i = 0;i<n;i++)
         {
            
             for(int j = 0;j<n-1-i;j++)  //here we are just pushing largest element at the last and for next i am not comparing that one.
             {
                 if(arr[j] > arr[j+1])
                 {
                     swap(&arr[j],&arr[j+1]);
                 }
             }
             
         }
    }
void InsertionSort(int arr[],int n)
{
    for(int i = -1;i<n-1;i++)
    {
        int key = arr[i+1];
        for(int j = 0;j<=i;j++)
        {
            
            if(key < arr[j])
            {
                arr[i+1] = arr[j];
                swap(&arr[j],&key);
                
            }
        }
    }
}
void SelectionSort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        int j,k;
        for(j=i,k=i;j<n;j++)
        {          
            if(arr[j]<arr[k])
            {
                k = j; 
            }           
        }
        swap(&arr[i],&arr[k]);      
    }
}
int main()
{
    int arr[] = {15,2,12,5,800,40,10};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);
    InsertionSort(arr,n);
    SelectionSort(arr,n);
    
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Kth largest number is "<<arr[1];
}
    
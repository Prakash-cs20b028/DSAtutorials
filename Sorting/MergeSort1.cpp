#include<iostream>
using namespace std;

void Merge(int arr[],int low,int mid,int high)
    {
        int i = low,j = mid+1,k = low;
        int *arr1 = new int[100];
        while(i<=mid && j<=high)
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
        for(;j<=high;j++)
        {
            arr1[k++] = arr[j];
        }
        for(i = low;i<=high;i++)
        {
            arr[i] = arr1[i];
        }
    }
   
    void mergeSort1(int arr[],int l,int h)
    {
        int n = h+1;
        for(int p = 1;p<=n;p = p*2)
        {
            
            for(int i = l;i<n;i = i+2*p)
            {
                int low = i;
                int mid = i+p-1;
                int high = min(i+2*p-1,h);
                
                Merge(arr,low,mid,high);
            }
        }
        
    }

int main()
{
    int arr[] = {100,500,2,8,1,10,11,20,15,20,30,40,200};
    int n = sizeof(arr)/sizeof(int);

    mergeSort1(arr,0,n-1);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
}
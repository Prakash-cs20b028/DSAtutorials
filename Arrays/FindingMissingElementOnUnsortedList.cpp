#include<iostream>
using namespace std;
int Biggest(int arr[],int n)  //this will take O(n) time.
{
    int min = arr[0];
    for(int i = 0;i<n;i++)
    {
        if(min < arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int Smallest(int arr[],int n)  //this will take O(n) time.
{
    int min = arr[0];
    for(int i = 0;i<n;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
void FindingMissing(int arr[],int n)
{
    int l = Smallest(arr,n);
    int m = Biggest(arr,n);
    int H[m] ={0}; //it will take 0 value over its whole size.
    //this is the concept of hashing where we declare size of array as maximum value of element in another array.
    //as we go to the element in another array and consider that element as index for the hash array and mark
    //as 1 that's it.
    int i = 0;
    cout<<"Size of hash table is "<<sizeof(H)<<endl;  //m * 4 bits.
    while(i < n)
    {
        H[arr[i]] = 1;
        i++;
    }
    while(l<m)
    {
        if(H[l] == 0)
        {
            cout<<l<<" ";
            
        }
        l++;
    }
    
}
int main()
{
    int arr[] = {20,10,30,125,4,7,15};
    int n = sizeof(arr)/sizeof(int);

    FindingMissing(arr,n);

return 0;
} 
#include<iostream>
using namespace std;
void check1(int arr[],int m,int n)
{
    int i = arr[0],j = 0;  //here we should know i as arr[0] such that we could start from a right 
    while(i <= m && j < n)
    {
        if(i == arr[j])
        {
            i++;
            j++;
        }
        else
        {
            cout<<i<<" ";
            i++;   // it tells like until we get similarity of i with arr[j] we will continue for the same arr[j].
            //cout<<endl;
            //j++;
            //break;
        }
    }
    cout<<endl;
}
void check2(int arr[],int n)
{
    int diff = arr[0] - 0;
    for(int i = 0;i<n;i++)
    {
        
        if(arr[i] - i != diff)  //while loop will continue till it get fail for the one value of i.then it will
        {                       //return to the if statement and then if it fails on if ststms.then it will
            while(diff<arr[i] - i)  //go the for loop where it will increase value of i by 1 and again comeback.
            {
                cout<<diff + i<<" ";
                diff++;
            
            }
            
        }
        
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,7,9,10,12,20};
    int n = sizeof(arr)/sizeof(int);
    int m = arr[n-1];

    check1(arr,m,n);
    check2(arr,n);
}
#include<iostream>
using namespace std;
void findingduplicate(int arr[],int n)
{
    int i = 0;
    int count = 1;
    while(i<n)
    {       
        int j = i+1;
        while(j<n)
        {
            if(arr[i] == arr[j])
            {
                count++;
                cout<<arr[i]<<" ";
                // if(count < 3)  //we use here if stmts because we want to print only duplicate o/w we can left it.
                // {
                //     cout<<arr[i]<<" ";
                //     i++;
                // }
                 
                cout<<count<<endl;
                j++;
                
            }
            else
            {
                j++;
            }
            
        }
        i++;
        count = 1;
    }
}
int main()
{
    int arr[] = {1,1,8,8,10,10,11,12,12,15};

    int n = sizeof(arr)/sizeof(int);
    
    findingduplicate(arr,n);
}
#include<iostream>
using namespace std;

// int Union(int arr1[],int arr2[],int arr3[],int m,int n)
// {
//     int k = 0;
//     int flag = 1;
//     for(int i = 0;i<m;i++)
//     {
//         arr3[k] = arr1[i];
//         k++;
//     } 
//     for(int j = 0;j<n;j++)
//     {
//         for(int i = 0;i<m+n;i++)
//         {
//             if(arr2[j] == arr3[i])
//             {
//                 flag = 1;
//                 break;
//             }
//             else
//             {
//                 flag = 0;
//             }
//         }
//         if(flag == 0)
//         {
//             arr3[k++] = arr2[j];
//         }
        
//     }
    
//     return k;
// }
void display(int *arr3,int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<"\n";
}
int Intersection(int arr1[],int arr2[],int arr4[],int m,int n)
{
    int k = 0;
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {

            if(arr1[i] == arr2[j])
            {
                arr4[k++] = arr1[i];
                break;   //this is using to not take duplicate value.
            }
        
        }
    }
    return k;
}
int main()
{
    int arr1[] ={10,7,30,60,4,5,15,100};
    int arr2[] ={20,7,4,60,10,10};

    int m = sizeof(arr1)/sizeof(int);
    int n = sizeof(arr2)/sizeof(int);
    // int *arr3 = new int[m+n];
    // int size4 = Union(arr1,arr2,arr3,m,n);

    // cout<<"Union of two set is "<<endl;
    // display(arr3,size4);

    int *arr4 = new int[m+n];
    int size5 = Intersection(arr1,arr2,arr4,m,n);

    display(arr4,size5);

return 0;
}
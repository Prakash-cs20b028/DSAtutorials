#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;  //We can use int,float,char or any predefined data types as we want.tht type of vector will be created.
    // we can keep size of vector as well like
    vector<int> v1(5);
    cout<<v1[0]<<" ";   //vector is nearly similar to array.Because it needs selective operators.
    v1.push_back(20);    //if i am adding an extra element then it will be added at the last of v1.
    cout<<v1[5]<<" ";
    int n;
    cout<<"Enter size of vector \n";
    cin>>n;
    printf("Enter element of a vector \n");
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    // cout<<endl;
    
}
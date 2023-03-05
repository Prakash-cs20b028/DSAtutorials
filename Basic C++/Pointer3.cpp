#include<iostream>
using namespace std;
int main()
{
    int brr1[] = {2,3,4,5};  //its address and below address is changed.
    int brr[4] = {1,3,5,6};
    int *p1 = brr;   //when array name is used to call itself then it returns address.

    
    //arr + 2;  //it means it is now pointing to the third element of an array.
    cout<<p1+2<<" "<<brr+2<<brr1+2<<endl;
    //p++;   //it means it is now pointing to the seconde element of array

    cout<<*(p1+1)<<" "<<*(brr+1)<<" "<<brr[1]<<" "<<p1[1];

}
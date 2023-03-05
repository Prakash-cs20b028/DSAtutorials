#include<iostream>
using namespace std;
//Calculation of area and perimeter by using monolithic concepts

int main()
{
    int len = 0;   //here initialising of len and bre provides a good concepts to using in largest programs.
    int bre = 0;

    cout<<"Enter length and breadth "<<endl;
    cin>>len>>bre;
    int Ar = len * bre ;
    cout<<Ar<<endl;
    int peri = 2 * (len + bre);
    cout<<peri<<endl;
}
#include<iostream>
using namespace std;
int main()
{
    char ch = 'A';
    cout<<ch<<endl;  //it will print A
    cout<<(int)ch<<endl;
    //now i want to increase its size then how it will be increased
    int ch1 = ch + 32;
    cout<<(char)ch1<<endl;
    ch = ch + 32;
    cout<<ch;
}
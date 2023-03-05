#include<iostream>
using namespace std;
void function(int x)
{
    if(x > 0)
    {
        cout<<x<<" ";
        function(x-1);
    }
}

void function1(int y)
{
    if(y>0)
    {
        function1(y-1);
        cout<<y<<" ";
    }
}
int main()
{
    int x = 5;
    function(x);
    cout<<endl;
    
    function1(x);

    return  0;
}
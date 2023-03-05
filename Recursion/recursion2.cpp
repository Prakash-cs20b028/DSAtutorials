#include<iostream>
using namespace std;

int x = 0;

int fun1(int n)
{
    if(n>0)
    {
        return fun1(n-1) + n;
    }
    return 0;
}
int fun2(int n)
{
    static int x = 0;
    if(n > 0)
    {
        x++;
        return fun2(n-1) + x;
    }
    
    return 0;
    
}
int fun3(int n)
{
    
    if(n > 0)
    {
        x++;
        return fun3(n-1) + x;
    }
    
    return 0;
    
}
int main()
{
    int x = 5;
    cout<<fun1(x)<<" ";

    cout<<endl;

    cout<<fun2(x)<<" ";

    cout<<endl;

    cout<<fun3(x)<<" ";

    return 0;
}


//for the static variable and global variable,Code part will be created only in code section and it will be reamined same for the 
//the whole time.It is not similar to the stack memory wherer function use some stack and then comeback after finishing that memory.
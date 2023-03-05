#include<iostream>
using namespace std;
void fun(int n)   //this is tree recursion.
{
  
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);   //here once call come then it will go down if it finish his work here.
        fun(n-1);
    }
}
void fun1(int n)   //this is the linear recursion
{
   
    if(n>0)
    {
    
        cout<<n<<" ";
        fun1(n-1);
        cout<<n<<" ";
    }
}
//cout<<"Output of Head recursion "<<endl;
void fun2(int n)   //this is the head recursion if we keep fun2(n-1) at the last position then it becomes tail recursion.
{
     
    if(n>0)
    {
        fun2(n-1);
        cout<<n<<" ";
        cout<<n<<" ";
        
    }
}
int main()
{
    int x = 3;
    fun(x);
    cout<<endl;

    fun1(x);
    cout<<endl;

    fun2(x);
    return 0;
}
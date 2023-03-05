#include<iostream>
using namespace std;

template<class T>
class Test
{
    private:
    T a;
    T b;
    
    public:

    Test(T a,T b)
    {
        this->a = a;   // while in java we just use this.a = a and this.b = b
        this->b = b;  
    }
    T add();
    T sub();

 }; 
    template<class T>

    T Test<T>:: add()
    {
        return a + b;
    }
    template<class T>

    T Test<T>:: sub()
    {
        return a - b;
    }

int main()
{
    Test <float> t{20,5};
    cout<<t.add()<<endl;
    cout<<t.sub();

return 0;
}
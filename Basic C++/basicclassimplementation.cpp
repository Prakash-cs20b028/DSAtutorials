#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int len,bre;

    public:
    Rectangle(int l,int m)
    {
        len = l;
        bre = m;
    }
    void Area() ;
    int Perimeter();
    
};
void Rectangle :: Area()
{
    cout<<len*bre;
}
int Rectangle :: Perimeter()
{
    return len+bre;
}
int main()
{
    Rectangle r(5,3);
    int l = 10,m = 20;
    //r.initialise(l,m);
    r.Area();
    int p = r.Perimeter();
    cout<<p;
return 0;
}
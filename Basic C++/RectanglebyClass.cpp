#include<iostream>
using namespace std;
class Rectangle
{
    private: 

    int len ;
    int bre;

    public:

    Rectangle(int l,int m);
    
    // initialisation(int l,int m)
    // {
    //     len = l;
    //     bre = m;
    // }
    int area();
    
    int perimeter();
    
    void setlength(int m)
    {
        len = m;
    }
    int getlength()
    {
        return len;
    }

};
Rectangle:: Rectangle(int l,int m)   //here we are using scope resolution.
{
        len = l;
        bre = m;
}
int Rectangle:: area()
{
    return len * bre;
}
int Rectangle:: perimeter()
{
        return 2 * (len+bre);
}
int main()
{
    //time to create object of Rectangle class.
    int l,m;
    cout<<"Enter len and bredth "<<endl;
    cin>>l>>m;
    Rectangle r = {l,m};  //here we are passing 10 and 5 to the constructor
    
   // r.initialisation(l,m);  //we could use this method if we didn't declare constructor.
    cout<<r.area()<<endl;  //here we are passing value l and m in both area and perimeter because we haven't initialse len and bre.
    cout<<r.perimeter()<<endl;
    r.setlength(500);
    cout<<r.getlength();

}

//if we initialise len and bre then no need to send l and m through pareameter.
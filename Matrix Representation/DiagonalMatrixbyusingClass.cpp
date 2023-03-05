#include<iostream>
using namespace std;
class Matrix
{
    private:
    int *arr = new int();
    int n ;
    public:

    void display()
    {
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(i == j)
                {
                    cout<<arr[i]<<" ";
                }
                else
                {
                    cout<<"0"<<" ";
                }
            }
            cout<<endl;
        }
    }
    void set(int i,int j,int ele);   
};
void Matrix :: set(int i,int j,int ele)
{
    n = i;
    if(i == j)
    {
        arr[i-1] = ele;
    }
}
int main()
{
    Matrix m;  //creating object of matrix.
    m.set(1,1,10);
    m.set(2,2,20);
    m.set(3,3,30);
    m.set(4,4,40);
    m.display();

}

//here we don't need to pass parameter as array because class has already those array and size as n.
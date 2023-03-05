#include<iostream>
using namespace std;
int main()
{
    int *p = new int[5];  //directly we cann't change size of array when it is declared once.It is not saying to change 5 to other value.
    p[0] = 10;
    p[3] = 20;

    cout<<sizeof(p)<<endl;

    int *q = new int[10];

    for(int i = 0;i<5;i++)
    {
        q[i] = p[i];
    }
    delete [] p;
    p = q;         //here we can point to qth address without deleting previous array but that will consume mem.So, its better to delete.
    q = NULL;    //here we can left q as it is without deleting. but the same problem that we will suffer like extra consuming mem.

    for(int i = 0;i<10;i++)
    {
        cout<<p[i]<<" ";
    }
}
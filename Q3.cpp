#include<iostream>
using namespace std;
class Array
{
    int a[100];
    const int size=100;
    public:
    Array()
    {

    }   
    void setarray(int n,int index)
    {
        if(index >= size)
        {
            cout<<"Out of bound exception";
            exit(0);
        }
        a[index]=n;
    }
    void display(int index)
    {
        cout<<a[index]<<endl;
    }
    int operator [](int index)
    {
        if(index>=size)
        {
            cout<<"Out of bound expception";
            exit(0);
        }
        return a[index];
    }
};
int main()
{
    Array b;
    b.setarray(4,50);
    cout<<b[12];
}
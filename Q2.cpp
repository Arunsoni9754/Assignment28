#include<iostream>
using namespace std;
class  Complex
{
    int r,i;
    public:
    Complex()
    {

    }
    Complex(int a,int b)
    {
        r=a;
        i=b;
    }
    void setdata(int r,int i)
    {
        this->r=r;
        this->i=i;
    }
    void display()
    {
        cout<<r<<"+("<<i<<"j)"<<endl;
    }

};
int main()
{
    Complex c1(4,5);
    Complex c2;
    c2.setdata(6,7);
    c1.display();
    c2.display();
    return 0;
}
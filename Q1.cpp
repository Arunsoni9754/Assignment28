#include<iostream>
using namespace std;
class  Complex
{
    public:
    int r,i;
    friend istream& operator>>(istream &ip,Complex &c)
    {
        cout<<"Enter the real value ";
        ip>>c.r;
        cout<<"Enter the imaginary value ";
        ip>>c.i;
        return ip;
    }
    friend ostream& operator<<(ostream &op,Complex &c)
    {
        op<<c.r<<"+("<<c.i<<"j)"<<endl;
        return op;
    }
    

};
int main()
{
 Complex c1,c2;
 cout<<"Enter a complex number "<<endl;
 cin>>c1>>c2;  
 cout<<c1<<c2;
}
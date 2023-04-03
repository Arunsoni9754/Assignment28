#include<iostream>
using namespace std;
class Coord
{
    int x,y,z;
    public:
    Coord()
    {
        x=y=x=0;
    }
    Coord(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void display()
    {
        cout<<x<<y<<z;
    }
    Coord operator,(Coord itf)
    {
        Coord temp;
        temp.x=itf.x;
        temp.y=itf.y;
        temp.z=itf.z;
        return temp;
    }
};
int main()
{
    Coord c1(3,6,5),c2(5,6,7),c3(2,3,4),c4(2,9,0);
    
    c1=(c2,c3);
    c1.display();
    cout<<endl;
    c2.display();
    cout<<endl;
    c3.display();
    c2=(c1,c3,c4);
    cout<<endl;
    c4.display();
    cout<<endl;
        c2.display();

}

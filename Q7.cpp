#include<iostream>
using namespace std;
class Integer
{
    int i;
    public:
    Integer (int i):i(i)
    {

    }
    int operator !()
    {
        return -i;
    }
};
int main()
{
    Integer i=10;
    cout<<!i;

}
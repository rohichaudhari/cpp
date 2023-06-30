#include<iostream>
using namespace std;
class SOLID
{
    
    public:
    SOLID(int a)
    {
        cout<<"volume of cube is:"<<a*a*a<<endl;
    }
    SOLID(double l,int b,int h)
    {
        cout<<"volume of cuboid:"<<l*b*h<<endl;
    }
    SOLID(int r,int h)
    {
        cout<<"volume of cone:"<<1/3*22/7*r*r*h<<endl;
    }
};
int main()
{
    SOLID a(10),b(2.5,8,9),c(4,7);
}
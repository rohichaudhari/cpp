#include<iostream>
using namespace std;
class SOLID
{
    
    public:
    SOLID(int a)
    {
        cout<<"volume of cube is:"<<a*a*a<<endl;
    }
    SOLID(int l,int b,int h)
    {
        cout<<"volume of cuboid:"<<l*b*h<<endl;
    }
    SOLID(double r,double h)
    {
      cout<<"volume of cylinder is:"<<3.14*r*r*h<<endl;
    }
    SOLID(double r)
    {
        cout<<"volume of sphere:"<<4*3.14*r*r*r/3<<endl;
    }
    SOLID(double r,int h)
    {
        cout<<"volume of cone:"<<3.14*r*r*h/3<<endl;
    }
    
};
int main()
{
    SOLID a(10),b(5,8,9),c(4.4,7.6),d(2.2),e(4.4,6);
}
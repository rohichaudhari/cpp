#include<iostream>
using namespace std;
class test
{
    public:
    int task(int a)
    {
        return a*a*a;
    }
    int task(int l,int b,int h)
    {
        return l*b*h;
    }
    double task(double r,int h)
    {
        return 3.14*r*r*h/3;
    }
    double task( double b,double h)
    {
        return b*h/3;
    }
};
int main()
{
    test t;
    cout<<"volume of cube:"<<t.task(10)<<endl;
    cout<<"volume of cuboid:"<<t.task(20,30,10)<<endl;
    cout<<"volume of cone:"<<t.task(20.6,10)<<endl;
     cout<<"volube of pyramid:"<<t.task(2.3,2.4)<<endl;
}                                
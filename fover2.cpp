#include<iostream>
using namespace std;
class test
{
    public:
    int done(int b,int h)
    {
        return b*h;
    }
    float done(float a)
    {
        return a*a;
    }
    double done(double l,double b)
    {
        return l*b;
    }
};

int main()
{
    test t;
    cout<<"area of triangle:"<<t.done(20,10)<<endl;
    cout<<"area of square:"<<t.done(10.1)<<endl;
    cout<<"area of rectangle:"<<t.done(11.1,11.1)<<endl;
}


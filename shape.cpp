#include<iostream>
using namespace std;
class TWO
{
    public:
    TWO(int b,int h)
    {
        cout<<"area of triangle:"<<b*h/2<<endl;
    }
    TWO(int a)
    {
        cout<<"area of  square:"<<a*a<<endl;
    }
    
    TWO(double r)
    {
        cout<<"area of  circle:"<<3.14*r*r<<endl;
    }
};
int main()
{
TWO a(3,6),b(4),d(2.2);
}

#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void dis()
    {
    cout<<"base class called..."<<endl;
    }
};
class Derived:public Base
{
    public:
    void dis()
    {
        cout<<"derived class called..<<endl";
    }
};
int main()
{
    Base *p,b;
    Derived d;
    p=&b;
    p->dis();
    p=&d;
    p->dis();
}
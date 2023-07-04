#include<iostream>
using namespace std;
class box
{
    int l,w,h;
    public:
    void setdata(int x,int y,int z)
    {
        l=x;
        w=y;
        h=z;
    }
    int getdata()
    {
        return l*w*h;
    }
    box operator% (box &n)
    {
        box s;
        s.l=l%n.l;
        s.w=w%n.w;
        s.h=h%n.h;
        return s;
    }
};
int main()
{
    box x, y,z;
    x.setdata(9,9,9);
    cout<<"box x volume is:"<<x.getdata()<<endl;
    y.setdata(2,2,2);
    cout<<"box y volume is:"<<y.getdata()<<endl;
    z=x%y;
    cout<<"volume of z is:"<<z.getdata()<<endl;
}
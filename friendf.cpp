#include<iostream>
using namespace std;
class box
{
    int l,w,h;
    friend box add(box,box);
    public:
    void setdata(int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
};
box add(box x,box y)
{
    box t;
    t.l=x.l+y.l;
    t.w=x.w+y.w;
    t.h=x.h+y.h;
    return t;
}
int main()
{
    box a,b,c;
    a.setdata(3,4,5);
    cout<<"volume of box A is:"<<a.getdata()<<endl;
    b.setdata(3,6,9);
    cout<<"volume of box B is:"<<b.getdata()<<endl;
    c=add(a,b);
    cout<<"volume of box C is:"<<c.getdata()<<endl;
}
#include<iostream>
using namespace std;
class Box
{
    int l,w,h;
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
    friend Box operator+(Box m,Box n)
    {
        Box t;
        t.l=m.l+n.l;
        t.w=m.w+n.w;
        t.h=m.h+n.h;
        return t;
    }
};
int main()
{
    Box a,b,c;
    b.setdata(3,3,3);
    cout<<"Box b volume is:"<<b.getdata()<<endl;
    a.setdata(4,4,4);
    cout<<"Box a volume is:"<<a.getdata()<<endl;
    c=a+b;
    cout<<"Box c volume is:"<<c.getdata()<<endl;
}

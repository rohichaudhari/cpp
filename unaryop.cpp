#include<iostream>
using namespace std;
class test
{
    int l,w,h;
    public:
int setdata(int a,int b,int c)
{
    l=a;
    w=b;
    h=c;
}
int getdata()
{
    return l*w*h;
}
test operator++()
{
    test t;
    t.l=++l;
    t.w=++w;
    t.h=++h;
    return t;
}
};
int main()
{
    test a,b;
    a.setdata(2,4,6);
    cout<<"volume of a is:"<<a.getdata()<<endl;
    
    b=++a;
    cout<<"volume of b is:"<<b.getdata()<<endl;

}
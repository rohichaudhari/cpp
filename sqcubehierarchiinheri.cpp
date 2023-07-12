#include<iostream>
using namespace std;
class square
{
    protected:
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
};
class Derived:public square
{
    protected:
    int i,c;
    public:
    void setM()
    {
        for(i=1;i<=n;i++)
        {
            c=i*i;
            cout<<c<<endl;
        }
    }
};
class Derived2:public square
{
    protected:
    int i,x;
    public:
    void setm()
    {
        for(i=1;i<=n;i++)
        {
            x=i*i*i;
            cout<<x<<endl;
        }
    }
};
int main()
{
    Derived d;
    d.setN();
    d.setM();
    Derived2 b;
    b.setN();
    b.setm();
}

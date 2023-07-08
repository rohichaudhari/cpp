#include<iostream>
using namespace std;
class Base
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
class derived:public Base
{
    public:
    int i,c;
    void getN()
    {
    for(i=1;i<=n;i++)
    {
        c=i*i;
        cout<<c<<endl;
    }
    }
};
int main()
{
    derived d;
    d.setN();
    d.getN();
}


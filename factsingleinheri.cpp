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
        cout<<i<<endl;
        c=n*n-1*n-2;
    }
}
};



#include<iostream>
using namespace std;
class base1
{
protected:
int m;
public:
setM()
{
    cout<<"enter m:";
    cin>>m;
}
};
class base2:public base1
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
class base3:public base2
{
    protected:
    int w;
    public:
     void setW()
     {
        cout<<"enter w:";
        cin>>w;
     }
     void getM()
     {
        cout<<"addition of m,n and w:"<<m+n+w<<endl;
     }
};
int main()
{
    base3 a;
    a.setM();
    a.setN();
    a.setW();
    a.getM();
}
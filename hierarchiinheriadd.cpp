#include<iostream>
using namespace std;
class base
{
    protected:
    int m;
    public:
    void setM()
{
    cout<<"enter m:";
    cin>>m;
}
};
class Derived1:public base
{
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
    void addition()
    {
        cout<<"addition of m and n is:"<<m+n<<endl;
    }
};
class Derived2:public base
{
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
    void product()
    {
        cout<<"product of m and n is:"<<m*n<<endl;
    }
};
int main()
{
    Derived1 d;
    d.setM();
    d.setN();
    d.addition();
    Derived2 b;
    b.setM();
    b.setN();
    b.product();
}
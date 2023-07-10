#include<iostream>
using namespace std;
class Base1
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
class Base2
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
class derived:public Base1,public Base2
{
    public:
    void product()
    {
        cout<<"product of m and n:"<<m*n<<endl;
    }
};
int main()
{
    derived d;
    d.setM();
    d.setN();
    d.product();
}
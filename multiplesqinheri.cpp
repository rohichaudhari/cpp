#include<iostream>
using namespace std;
class base1
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
class base2
{
protected:
int n=1;
public:
void setN()
{
    cout<<"enter n:";
    cin>>n;
    for(n=1;n<=10;n++)
    {
        cout<<n<<endl;
    }
}
};
class derived:public base1,public base2
{
    public:
    int i,c;
    void table()
    {
        cout<<"m"<<"\tn"<<"\tc"<<endl;
        for(i=1;i<=10;i++)
        {
            c=m*i;
            cout<<c<<endl;
            cout<<m<<"\t"<<n<<"\t"<<c<<endl;
        }
    }
};
int main()
{
    derived x;
    x.setM();
    x.setN();
    x.table();
}





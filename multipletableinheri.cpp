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
};
class derived:public base1,public base2
{
    public:
    int i,c;
    void table()
    {
        
        for(i=1;i<=10;i++)
        {
            c=m*i;
            cout<<m<<"\t"<<n<<"\t"<<c<<endl;
            n++;
        }
    }
};
int main()
{
    derived x;
    x.setM();
    x.table();
}





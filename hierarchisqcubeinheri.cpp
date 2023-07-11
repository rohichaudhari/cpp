#include<iostream>
using namespace std;
class sq
{
int m;
public:
void setM()
{
    cout<<"enter m:";
    cin>>n;
}
};
class Derived1:public sq
{
    int i,c;
    void getN()
    {
        for(i=1;i<=m;i++)
        {
            c=i*i;
            cout<<c<<endl;
        }
    }
};
class Derived2:public sq
{
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
    

    
};


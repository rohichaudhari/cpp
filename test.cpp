#include<iostream>
using namespace std;
class test
{
    private:
    int testcode;
    char description[30];
    int Nocandidate,centerreqd;
    CALCNTR()
    {
        return Nocandidate/100+1;
    }
    public:
    SCHEDULE()
    {
        cout<<"enter testcode:";
        cin>>testcode;
        cout<<"enter description:";
        cin>>description;
        cout<<"enter Nocandidate:";
        cin>>Nocandidate;
        centerreqd=CALCNTR();
    }
    DISPTEST()
    {
        cout<<"testcode:"<<testcode<<endl;
        cout<<"description:"<<description<<endl;
        cout<<"Nocandidate:"<<Nocandidate<<endl;
        cout<<"centerreqd:"<<centerreqd<<endl;
    }

};
int main()
{
    test t;
    t.SCHEDULE();
    t.DISPTEST();
}

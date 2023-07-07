#include<iostream>
using namespace std;
class bank
{
    char name[20];
    int acno;
    char actype[20];
    int tbalance=1000,damt,wamt;
    public:
    
    void deposite()
    {
        cout<<"enter deposite amt:";
        cin>>damt;
        tbalance+=damt;
        cout<<"Your  Deposite Amount is: "<<damt<<endl;
    }
    void withdrawal()
    {
         cout<<"enter withdrawl amt:";
        cin>>wamt;
        if(tbalance < wamt){
                cout<<"Sorry not withdraw amount"<<endl;
        }else{
            tbalance-=wamt;
            cout<<"Your  Withdraw Amount is: "<<wamt<<endl;
        }
    }
    void showdata()
    {
        cout<<"tbalance:"<<tbalance<<endl;    
    }
};
int main()
{
    bank b;
   int ch;
   cout<<"1. Deposite Amount"<<endl;
   cout<<"2. Withdraw Amount"<<endl;
   cout<<"3. Show Balance"<<endl;
   cout<<"0. Exit"<<endl;
   cout<<endl;
   do{
        cout<<"Enter Choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            b.deposite();
            break;
        case 2:
            b.withdrawal();
            break;
        case 3:
            b.showdata();
            break;
        case 0:
            break;
        default:
            cout<<"Wrong choice"<<endl;
            break;
        }

   }while(ch!=0);
}
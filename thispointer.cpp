#include<iostream>
using namespace std;
class Bank
{
    string name;
    int balance;
    public:
    void setdata(string name,int balance)
    {
        this->name=name;
        this->balance=balance;
    }
    void get()
    {
        cout<<"name:"<<name<<endl;
        cout<<"balance:"<<balance<<endl;
    }
};
int main()
{
    Bank b;
    b.setdata("hello",987);
    b.get();
}
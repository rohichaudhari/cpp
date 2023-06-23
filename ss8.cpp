#include<iostream>
using namespace std;
int main()
{
    char i;
    cout<<"print charecter:";
    for(i=0;i<=24;i++)
    {
        if(i%4==0)
        {
            cout<<char(i+65)<<" ";
        }
        else
        {
            cout<<char(i+97)<<" ";
        }
    }
}
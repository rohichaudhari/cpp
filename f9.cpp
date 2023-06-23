#include<iostream>
using namespace std;
int main()
{
    int i,j,a=1;
    for(i=11;i<=15;i++)
    {
        for(j=11;j<=15;j++)
        {
            cout<<a<<" ";
            a++;
        }
        a=a+5;
        cout<<"\n";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int i,n,a=0,b=1,k;
    cout<<"enter n:";
    cin>>n;
    cout<<b<<" ";
    for(i=0;i<=n;i++)
    {
    k=a+b;
    cout<<k<<" ";
    a=b;
    b=k;
    
    }
}
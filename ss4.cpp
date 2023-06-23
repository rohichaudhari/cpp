#include<iostream>
using namespace std;
int main()
{
    int i,n,a=1;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i*=2)
    {
        cout<<a*i<<" ";
        a++;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int i,n,total=0;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        i=i+1;
        cout<<i<<" ";
        total+=i;
    }
    cout<<"\n total is:"<<total;
}
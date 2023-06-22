#include<iostream>
using namespace std;
int main()
{
    int i,n,total=0;
    cout<<"enter n:";
    cin>>n;
for(i=1;i<=10;i++)
    {
    cout<<i<<" ";
    total+=i;
    }
    cout<<"\ntotal:"<<total;
}
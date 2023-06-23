#include<iostream>
using namespace std;
int main()
{
    int i,n,sq=1;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        cout<<sq<<" ";
    }
}
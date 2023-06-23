#include<iostream>
using namespace std;
int main()
{
    int i,n,k;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            k=i*i;
            cout<<k<<" ";
        }
        else
        {
            cout<<i<<" ";
        }
        
    }
}
#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    for(i=0;i<=10;i++)
    {
        cout<< i<<" ";
        total+=i;
    }
    cout<<"\ntotal is:"<<total;
}
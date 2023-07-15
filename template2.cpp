#include<iostream>
using namespace std;
template<class T>
void display(T t1)
    {
        cout<<"displaying  Template:"<<t1<<endl;
    }
    template<class x,class y>
    void Add(x a,y b)
    {
        cout<<"addition template:"<<a+b<<endl;
    }
    int main()
    {
        display(200);
        Add(2,5.7);
    }
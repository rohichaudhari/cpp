#include<iostream>
using namespace std;
template<class T>
void display(T t1)
    {
        cout<<"displaying  Template:"<<t1<<endl;
    }
    int main()
    {
        display(200);
    }
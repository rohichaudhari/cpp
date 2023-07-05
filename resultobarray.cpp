#include<iostream>
using namespace std;
class student
{
    int math,phy,eng,comp,total;
    float per;
    public:
    void setdata();
    void getdata()
    {
        total=math+phy+eng+comp;
        per=(float)total*100/400;
    }
    void display()
    {
        cout<<"math"<<"\tphy"<<"\teng"<<"\tcomp"<<"\ttotal"<<"\tper"<<endl;
        cout<<math<<"\t"<<phy<<"\t"<<eng<<"\t"<<comp<<"\t"<<total<<"\t"<<per<<endl;
        
    }

};
void student::setdata()
{
    cout<<"enter math marks:";
    cin>>math;
    cout<<"enter phy marks:";
    cin>>phy;
    cout<<"enter eng marks:";
    cin>>eng;
    cout<<"enter comp marks:";
    cin>>comp;
    getdata();
    display();
}
int main()
{
    student a[2];
    int i;
    for(i=0;i<2;i++)
    {
       //cout<<"no:"<<i+1<<endl;
        a[i].setdata();
   }
    for(i=0;i<2;i++)
   {
       //cout<<"no:"<<i+1<<endl; 
        a[i].getdata();
        
    }
}
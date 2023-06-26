#include<iostream>
using namespace std;
class stud
{
    private:
    int math,sci,eng,phy,total;
    float pr;
    public:
    void dis()
    {
        cout<<"math\tsci\teng\tphy\ttotal\tpr"<<endl;
        cout<<math<<"\t"<<sci<<"\t"<<eng<<"\t"<<phy<<"\t"<<total<<"\t"<<pr;
    }
    void calc()
    {
        total=math+sci+eng+phy;
        pr=(float)total/4;
    }
    void setdata()
    {
        cout<<"enter math marks:";
        cin>>math;
        cout<<"enter sci marks:";
        cin>>sci;
        cout<<"enter eng marks:";
        cin>>eng;
        cout<<"enter phy marks:";
        cin>>phy;
        }
};
int main()
{
stud z;
z.setdata();
z.calc();
z.dis();
}
#include<iostream>
using namespace std;
class RESULT
{
    private:
    int rno;
    char name[20];
    int math,phy,eng,sci,total;
    float per;
    public:
    RESULT()
    {
        cout<<"enter roll no:";
        cin>>rno;
        cout<<"enter name no:";
        cin>>name;
        cout<<"math marks:";
        cin>>math;
        cout<<"phy marks:";
        cin>>phy;
        cout<<"eng marks:";
        cin>>eng;
        cout<<"sci marks:";
        cin>>sci;
    }
    void CALCULATION()
    {
        total=math+phy+eng+sci;
        per=(float)total*100/400;
    }
    void DISPLAY()
    {
        cout<<"rno"<<"\tname"<<"\tmath"<<"\tphy"<<"\teng"<<"\tsci"<<"\ttotal"<<"\tper"<<endl;
        cout<<rno<<"\t"<<name<<"\t"<<math<<"\t"<<phy<<"\t"<<eng<<"\t"<<sci<<"\t"<<total<<"\t"<<per<<endl;
    }
};
int main()
{
    RESULT t;
    t.CALCULATION();
    t.DISPLAY();
}
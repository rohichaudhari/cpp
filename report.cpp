#include<iostream>
using namespace std;
class REPORT
{
    int i;
    int adno;
    char name[20];
    float marks[5];
    float avg,total,per;
    float GETAVG()
    {
        for(i=0;i<5;i++)
        {
            total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
            avg=total/5;
            per=(float)total*100/500;
           // return total;
            return avg;
            return per;
        }
    }
    public:
    void READINFO()
    {
        cout<<"enter admin no:";
        cin>>adno;
        cout<<"enter name:";
        cin>>name;
        for(i=0;i<5;i++)
        {
            cout<<"enter marks:";
            cin>>marks[i];
        }
        avg=GETAVG();
    }
    void DISPLAY()
        {
            cout<<"admin no:"<<adno<<endl;
            cout<<"name:"<<name<<endl;
            for(i=0;i<5;i++)
            {
                cout<<"marks:"<<marks[i]<<endl;
            }
            //cout<<"total:"<<total<<endl;
            cout<<"avg:"<<avg<<endl;
            cout<<"per:"<<per<<endl;
        }
};
int main()
{
    REPORT r;
    r.READINFO();
    r.DISPLAY();
}
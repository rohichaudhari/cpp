#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode;
    char bname[20];
    int inning,noteout,run;
    float calcavg;
    float batavg()
    {
        return (float)run/(inning-noteout);
    }
    
    public:
    void readdata()
    {
        cout<<"enter bcode:";
        cin>>bcode;
        cout<<"enter bname:";
        cin>>bname;
        cout<<"enter inning:";
        cin>>inning;
        cout<<"enter noteout:";
        cin>>noteout;
        cout<<"enter run:";
        cin>>run;
        calcavg=batavg();
    }
    void displaydata()
    {
        cout<<"batsman code:"<<bcode<<endl;
        cout<<"bats name:"<<bname<<endl;
        cout<<"inning:"<<inning<<endl;
        cout<<"noteout:"<<noteout<<endl;
        cout<<"run:"<<run<<endl;
        cout<<"calcavg:"<<calcavg<<endl;
    }
};
int main()
{
    batsman B;
    B.readdata();
    
    B.displaydata();
}
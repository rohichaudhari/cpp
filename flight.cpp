#include<iostream>
using namespace std;
class flight
{
    private:
    int flightno;
    char destination[30];
    float distance,quantity;
    int CALCFUEL()
    {
        if(distance<=1000)
        {
            return 500;
        }
        else if(distance<=2000)
        {
            return 1100;
        }
        else
        {
             return 2200;
        }
        

    }
    public:
    FEEDINFO()
    {
        cout<<"enter flightno:";
        cin>>flightno;
        cout<<"enter destination:";
         cin>>destination;
         cout<<"enter distance:";
         cin>>distance;
        quantity=CALCFUEL();
    }
    SHOWINFO()
    {
        cout<<"flightno:"<<flightno<<endl;
        cout<<"destination:"<<destination<<endl;
        cout<<"distance:"<<distance<<endl;
        cout<<"quantity:"<<quantity<<endl;

    }
};
int main()
{
 flight f;
 f.FEEDINFO();
 //f.CALCFUEL();
 f.SHOWINFO();
}
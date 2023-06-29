#include<iostream>
using namespace std;
class book
{
    private:
    int bno;
    char  btitle[20];
    float price,tcost;
    void TOTAL_COST(int n)
    {
        tcost=price*n;
        cout<<tcost;
    }
    public:
    void INPUT()
    {
        cout<<"enter book number:";
        cin>>bno;
        cout<<"enter book title:";
        cin>>btitle;
        cout<<"enter price:";
        cin>>price;
    }
    void PURCHASE()
    {
        int n;
        cout<<"number of copies:";
        cin>>n;
        TOTAL_COST(n);
    }
};
int main()
{
    book b;
    b.INPUT();
    b.PURCHASE();
}

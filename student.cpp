#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float eng, sci, maths, total;
    float ctotal(){
        return eng+sci+maths;
    }
    public:
    void Takedata(){
        cout<<"Enter admin no: ";
        cin>>admno;
        cout<<"Enter name: ";
        cin>>sname;
        cout<<"Enter maths marks: ";
        cin>>maths;
        cout<<"Enter science marks: ";
        cin>>sci;
        cout<<"Enter English marks: ";
        cin>>eng;
        total = ctotal();
    }

    void Showdata(){
        cout<<"Admin no: "<<admno<<endl;
        cout<<"Name: "<<sname<<endl;
        cout<<"Maths marks: "<<maths<<endl;
        cout<<"Science marks: "<<sci<<endl;
        cout<<"English marks: "<<eng<<endl;
        cout<<"Total marks: "<<total<<endl;
    }
};

int main()
{
    student s;
    s.Takedata();
    s.Showdata();
}
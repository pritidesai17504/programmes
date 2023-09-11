#include<iostream>
using namespace std;

class date
{
    private:
    int day;
    int month;
    int year;

    public:
    date()
    {
        day=1;
        month=1;
        year=1970;
    }
    date(int a,int b,int c)
    {
        day=a;
        month=b;
        year=c;
    }
    void display()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }


};
int main()
{    int a,b,c;
 cout<<"enter day month and year"<<endl;
    cin>>a>>b>>c;
    date d,D(a,b,c);
    d.display();
    D.display();
}
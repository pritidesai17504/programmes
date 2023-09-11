//create employee class to enter and display information of employee such as employee ID ,name ,address,designation,and salaryof last five yaers and calculate average salary
#include<iostream>
using namespace std;
class employee
{  public:
    string name;
    int id;
    int s[5];
    int avgsal=0;
    string address;

void printInfo()
{   int i=0;
    cout<<"name=";
    cout<<name<<endl;
    cout<<"employee id=";
    cout<<id<<endl;
    cout<<"salary=";
    for(i=0;i<5;i++)
    {
    cout<<s[i]<<endl;
    }
    cout<<"average salary"<<avgsal<<endl;
    cout<<"address=";
    cout<<address<<endl;
}
};
int main()
{
    int i=0,tot=0,avgsal=0;
  
  employee p;
    cout<<"name=";
    cin>>p.name;
    cout<<"employee id=";
    cin>>p.id;
    cout<<" salary=";
    for(i=0;i<5;i++)
    {
    cin>>p.s[i];
    tot+=p.s[i];
    }
    avgsal=tot/5;
    cout<<"average salary="<<avgsal<<endl;
    cout<<"address=";
    cin>>p.address;
   p.printInfo();
}
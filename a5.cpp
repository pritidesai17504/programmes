#include<iostream>
using namespace std;
class teacher
{  public:
    string name;
    int id;
    string subject;
    int salary;
    

void add(int d)
{  
    cout<<"name=";
    cin>>name;
    cout<<"employee id=";
    cin>>id;
    cout<<"subject=";
    cin>>subject;
    cout<<"salary=";
    cin>>salary;
    
}

void fetch(int d)
{
    int i=1;
    while(i<=d)
    {
      if(i==d)
       cout<<"name=";
      cout<<name<<endl;
      cout<<"employee id=";
      cout<<id<<endl;
      cout<<"subject=";
      cout<<subject<<endl;
      cout<<"salary=";
      cout<<salary<<endl;
       i++; 
    }
}
void printInfo(int n)
{   int i=0;
    while(i<n)
    {

    cout<<"name=";
    cout<<name<<endl;
    cout<<"employee id=";
    cout<<id<<endl;
    cout<<"subject=";
    cout<<subject<<endl;
    cout<<"salary=";
    cout<<salary<<endl;
    i++;
    }
}
};
int main()
{
  
  teacher p;
  int d,opt;
  while(1)
  {
    cout<<"menu\n1.add\n2.remove\n3.fetch\n4.display\n5.exit\n6.option:"<<endl;
    cin>>opt;
    if(opt>4)
    break;
    switch(opt)
    {
      case 1:
         cout<<"no. of which teacher details to be added";
         cin>>d; 
          p.add(d); break;

      case 2:
        cout<<"no. of which teacher details to be remove";
        cin>>d;
        break;
      case 3:
       cout<<"no. of which teacher details to be fetched";
       cin>>d;
       p.fetch(d); break;
       case 4:
       p.printInfo(d);
    }
  }
}
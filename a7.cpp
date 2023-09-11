#include<iostream>
using namespace std;

class Film
{   
    public:
    string name;
    string language,type;
    int duration;
     public:
      Film()
     {
        language = "Hindi";
        duration = 3;
     }
     void getdata(string a , string b)
     {
          name=a;
          type=b;
     }
     void display()
     {
       cout<<"Name of Film = "<<name<<endl;
       cout<<"Language of Film = "<<language<<endl;
       cout<<"Type of Film = "<<type<<endl;
       cout<<"Duration of Film = "<<duration<<endl;
     }
     ~Film(){}
};

int main()
{
  
   Film F;
   string a,b;
   cout<<"Enter the name and type of film "<<endl;
   getline(cin,a);
   getline(cin,b);
   F.getdata(a,b);
   F.display();

  return 0;
}

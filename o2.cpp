#include<iostream>
using namespace std;

class car;
{
    private:
  string make;
  string model;
  int year;
  public:
  void make()
  {
    cout<<"make of the car"<<endl;
    cin>>make;
  }
  void model()
  {
    cout<<"model of the car"<<endl;
    cin>>model;
  }
  void year()
  {
    cout<<"year of the car was made"<<endl;
    cin>>model;
  }
  void display()
  {
    cout<<make();
    cout<<model<<endl;


  }
};
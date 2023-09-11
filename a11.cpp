#include<iostream>
using namespace std;

class complex
{
   private:
   double real,imaginary;
   public:
    complex(){}
  complex(double a,double b)
  {
    real=a;
    imaginary=b;
  }
   void getdata()
   {
    cout<<"enter real and imaginary parts of complex number"<<endl;
    cin>>real>>imaginary;
   }
   complex operator+(complex c2)
   {
    complex t;
    t.real=real+c2.real;
     t.imaginary=imaginary+c2.imaginary;
     return t;
   }
   complex operator-(complex c2)
   {
    complex t;
    t.real=real-c2.real;
     t.imaginary=imaginary-c2.imaginary;
     return t;
   }
   complex operator*(complex c2)
   {
    complex t;
    t.real=real*c2.real-imaginary*c2.imaginary;;
     t.imaginary=real*c2.imaginary+imaginary*c2.real;
     return t;
   }
   void display()
   {
    cout<<real<<"+"<<imaginary<<"i"<<endl;
   }
};
int main()
{
    complex c1(4,7),c2,c3,c4,c5;
    c2.getdata();
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c3.display();
    c4.display();
    c5.display();

}
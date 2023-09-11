#include<iostream>
using namespace std;


    class circle
    {
      private:
       int radius;
       public:

       void getArea()
       {
        int a;
        cin>>radius;
        a=3.14*radius*radius;
        cout<<"area of circle is="<<a<<endl;
       }
       void getcircumference()
       {
         int c;
         cin>>radius;
         c=2*3.14*radius;
         cout<<"circumference of circle is="<<c;
       }
    };
 
 int main()
 {
    circle r;
    r.getArea();
    r.getcircumference();
 }
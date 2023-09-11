#include<iostream>
using namespace std;

class box
{
    private:
   int height;
   int width;
   int length;

   public:
   box()
   {
      height=30;
      width=40;
      length=50;
   }
   box(int a,int b,int c)
   {
       height=a;
       width=b;
       length=c;

   }
   void display()
   {
    cout<<"height="<<height<<endl;
    cout<<"width="<<width<<endl;
    cout<<"length="<<length<<endl;

   }

};
int main()
{
    int a,b,c;
    cout<<"enter height,width,heigth"<<endl;
    cin>>a>>b>>c;
    box d,D(a,b,c);
     d.display();
     D.display();
}
#include<iostream>
using namespace std;

class printData
{
   private:
   int integer;
   float decimal;
   string character;

   public:
    void print(int a)
    {
      integer=a;
    }
    void print(float b)
    {
        decimal=b;
    }
    void print(string c)
    {
        character=c;
    }
    void display()
    {
        cout<<"integer is "<<integer<<endl<<"decimal is "<<decimal<<endl<<"character"<<character<<endl;
    }
};
int main()
{
    int a;
    float b;
    string c;
    cout<<"enter integer decimal character"<<endl;
    cin>>a>>b>>c;
    printData p;
    p.print(a);
    p.print(b);
    p.print(c);
    p.display();
    
}
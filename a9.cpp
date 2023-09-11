#include<iostream>
using namespace std;

class operation
{
    private:
    int A,B;
    double M,N;
    string s1,s2;


    public:
    void operate(int a,int b)
    {
       A=a;
       B=b;
       cout<< "sum is "<<A+B<<endl;
    }
    void operate(double g,double h)
    {
        M=g;
        N=h;
        cout<<"product is "<<M*N<<endl;
    }
    void operate(string c,string d)
    {
        s1=c;
        s2=d;
        cout<<"concatination is "<<s1+s2<<endl;;
    }
};

int main()
{
    int a,b;
    double g,h;
    string c,d;
    cout<<"enter integer"<<endl;
    cin>>a>>b;
    cout<<"enter double"<<endl;
    cin>>g>>h;
    cout<<"enter string"<<endl;
    cin>>c>>d;
    operation o;
    o.operate(a,b);
    o.operate(g,h);
    o.operate(c,d);

}
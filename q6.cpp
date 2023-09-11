#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<"numbers after swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
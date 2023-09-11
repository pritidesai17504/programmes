#include<iostream>
using namespace std;

class number
{   public:

    int a[5];

    void display()
    {   
        int i=0,tmp,j;
     for(i=0;i<5;i++)
   {  
    for(j=i+1;j>4;j++)
    {
     if(a[i]>a[j])
     {
      tmp=a[i];
      a[i]=a[j];
      a[j]=tmp;
     }
     else
     continue;
    }
   }
        cout<<"largest number="<<a[4]<<endl;
        cout<<"secound largest number"<<a[3]<<endl;
        cout<<"smallest number"<<a[0]<<endl;
        cout<<"second smallest number"<<a[1]<<endl;
        cout<<"middle number"<<a[2]<<endl;
    }
    
};
int main()
{
    number b;
    int a[5];
   int i=0;
   cout<<"elements of array"<<endl;
   for(i=0;i<5;i++)
   {
     cin>>b.a[i];
   }
   
   b.display();
}
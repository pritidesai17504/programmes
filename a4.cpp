#include<iostream>
using namespace std;

class student
{  
    public:
   int rollNumber;
   string name;
   double marks[3];
    int avg;
   void setStudent()
   {  
    int i=0;
      cout<<"student roll number"<<endl;
      cin>>rollNumber;
      cout<<"student name"<<endl;
      cin>>name;
      cout<<"marks"<<endl;
      for(i=0;i<3;i++)
      {
        cin>>marks[i];
      }
   }
   void getRollnumber()
   {
      cout<<"roll number of student is "<<rollNumber<<endl;
   }
   void getName()
   {
    cout<<"student name is  "<<name<<endl;
   }
   void getMarks()
   {  int i=0;
     cout<<"marks"<<endl;
      for(i=0;i<3;i++)
      {
        cout<<marks[i]<<"\t";
      }
   }
   void calculateAverage()
   {
      int i=0,avg=0,sum=0;
      for(i=0;i<3;i++)
      {  
        sum=sum+marks[i];
      }
      avg=sum/3;
      cout<<"\naverage of marks is "<<avg<<endl;
   }
   void calculateGrade()
   {    
       if(avg>=90)
       cout<<"A"<<endl;
       else if(avg<90 &&avg>=80)
       cout<<"B"<<endl;
       else if(avg<80 &&avg>=70)
       cout<<"C";
       else
       cout<<"E";
   }
};
int main()
{   int n=5;
    cout<<"number of students"<<endl;
    cin>>n;
    student s[5];
    int i=0;
    for(i=0;i<n;i++)
    {
     s[i].setStudent();
     s[i].getRollnumber();
     s[i].getName();
     s[i].getMarks();
     s[i].calculateAverage();
     s[i].calculateGrade();
    }
}
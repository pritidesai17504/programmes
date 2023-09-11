#include<iostream>
using namespace std;
int main()
{
    char s[50]="CPP is easy and great and python is also great\0";
    int V=0,C=0,i=0;
    while(s[i]!='\0')
    {
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
       V++;
      else if((s[i]>65 &&s[i]<=90)||(s[i]>97&&s[i]<=122))
      {
       C++;
      }
      else
      ;
       i++;
    }
    cout<<"vowels="<<V<<endl;
    cout<<"consonants="<<C<<endl;
    return 0;
}
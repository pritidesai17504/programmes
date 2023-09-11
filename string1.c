#include<stdio.h>

int main()
{
    int i=0,uc=0,lc=0,dc=0,oc=0;
    char p[40];
    printf("string");
    gets(p);
    while(p[i]!='\0')
    {
        if(p[i]>=65 && p[i]<=90)
        uc++;
        else
        {
            if(p[i]>=97 && p[i]<=122)
            lc++;
        }
        else
        {
            if(p[i]>=48 && p[i]<=57)
            dc++;
        }
        else
        oc++;
        i++;
    }
    return 0;
}
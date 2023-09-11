#include<stdio.h>

int main()
{
    char p[40];
    int i=0,cnt=1;
    printf("\nstring");
    gets(p);
    while(p[i]!='\0')
    {
        if(p[i]==32 && p[i+1]!=32)
        cnt++;
        i++;
    }
    printf("\nwords:%d",cnt);
    return 0;
}
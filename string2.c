#include<stdio.h>

int main()
{
    char p[100];
    int i=0,cnt;
    printf("\nstring");
    gets(p);
    cnt=1;
    while(p[i]!='\0')
    {
        if(p[i]==32)
        cnt++;
        i++;
    }
    printf("\nwords:%d",cnt);
}
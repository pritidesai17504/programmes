#include<stdio.h>

int main()
{
    char p[100];
    int i=0;
    printf("\nstring");
    gets(p);
    while(p[i]!='\0')
    {
        if(p[i]>=48 && p[i]<=67)
        p[i]=p[i]+32;
        i++;
    }
    puts(p);
    return 0;
}
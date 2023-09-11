#include<stdio.h>
int main()
{
    int i=1,a=-1,b=1,c;
    while(i<=20)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
        i++;
    }
    return 0;

}
#include<stdio.h>

int main()
{
    int i=1,array[10],num,j;
    for(i=1;i<=10;i++)
    {
        printf("enter element",i);
        scanf("%d",&array[i]);
    }
    printf("enter number which is position of element");
    scanf("%d",&num);
    for(j=0;j<10;j++)
    {
        if(num==array[j])
        {
            printf("number %d is position of element %d",num,array[j]);
            break;
        }
       /*  else 
        {
            printf("number is not found");
        } */
    }
    if (j==10)
       printf("element not found");
    return 0;
}
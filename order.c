#include<stdio.h>

int main()
{
    int i=0,j,num,array[10];
    for(i=0;i<10;i++)
    {
        printf("enter element %d",i);
        scanf("%d",&array[i]);
    }
    for(j=0;j<10;j++)
    {
        for(i=j+1;i<10;i++)
        if(array[j]>array[i])
        {
            num=array[i];
            array[i]=array[j];
            array[j]=num;
        }
    }
    printf("inputed numbers in assending order ");
    for(i=0;i<10;i++)
    {
        printf("%d",array[i]);
    }
    
    return 0;
}
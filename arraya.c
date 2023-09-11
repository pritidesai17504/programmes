#include<stdio.h>

int main()
{
    int rows,columns,a[3][3],b[3][3],sum[3][3],i,j;
    printf("enter no of rows (between 1 and 3):");
    scanf("%d",&rows);
    printf("enter no of columns(between 1 and 3)");
    scanf("%d",&columns);
{
    printf("\nenter elements of 1st matrix:\n");
    for(i=0;i<rows;i++)
      for(j=0;j<columns;j++)
      printf("enter element a %d%d:",i+1,j+1);
      scanf("%d",&a[i][j]);
}
{
     printf("\nenter elements of 2nd matrix:\n");
     for(i=0;i<rows;i++)
     for(j=0;j<columns;j++)
     printf("enter element b %d%d:",i+1,j+1);
     scanf("%d",&b[i][j]);
}
{
    for(i=0;i<rows;i++)
       for(j=0;j<columns;j++)
       sum[i][j]=a[i][j]+b[i][j];
}
       printf("\nSum of two matrices :");
       for(i=0;i<rows;i++)
         for(j=0;j<columns;j++)
         {
            printf("%d",sum[i][j]);
         }
         if(j==columns-1)
         printf("\n\n");
    return 0;
}
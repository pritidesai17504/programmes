#include<stdio.h>

int main()
{
    int i,j,k,a[3][3],b[3][3],c[3][3];
    printf("enter elements of matrix a");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
              scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix b: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
            c[i][j]= c[i][j]+ a[i][k]*b[k][j];
            }
        }
    }
    printf("the product of matrices is :\n");
    for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++){
        printf("%d\t",c[i][j]);
     }
     printf("\n");
     }
     return 0;
}
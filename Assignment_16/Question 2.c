#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("Enter 1st elements of the matrix\n");

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     printf("Enter 2nd element of matrix\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
     for(i=0;i<3;i++)
     {
         sum=0;
         for(j=0;j<3;j++)
         {
             for(k=0;k<3;k++)
                sum=sum+a[i][k]*b[k][j];
             c[i][j]=sum;
         }
     }
     printf("The Product of Two Matrix is:\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
          printf("%d ",c[i][j]);
         }
         printf("\n");
     }

return 0;
}

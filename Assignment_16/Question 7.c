#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the elements of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Elements in a Matrix [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
        printf("Lower Triangular  values is \n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i>j)
                {
                    printf("%d ",a[i][j]);
                }
            }
        }
    return 0;
}

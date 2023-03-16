#include<stdio.h>
int main()
{
    int a[3][3],i,j,count=0;
    printf("Enter the matrix elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>=(3*3)/2)
    {
        printf("Matrix is sparse\n");
    }
    else
    {
        printf("Not a Sparse Matrix\n");
    }
    return 0;
}

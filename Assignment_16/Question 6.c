#include <stdio.h>

int main()
{
    int arr[3][3],i,j;
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nRow Sum....\n");
    for(int i=0;i<3;i++)
    {
        int rsum=0;
        for(int j=0;j<3;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }
    printf("\nColumn Sum....\n");
    for(int i=0;i<3;i++)
    {
        int csum=0;
        for(int j=0;j<3;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("\nSum of all the elements in column %d is %d\n",i,csum);
    }
    return 0;
}

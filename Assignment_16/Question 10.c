#include <stdio.h>

int main()
{

   int mat[3][3];

   int max_count=0, index=-1;
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

   for(int i=0; i<3; i++){
     int count = 0;
     for(int j=0; j<3; j++){
         if(mat[i][j]==1)
            count++;

     }
     if(count>max_count)
     {
        max_count = count;
        index = i;
     }
   }

   printf("Index of row with maximum 1s is %d", index);
return 0;
}

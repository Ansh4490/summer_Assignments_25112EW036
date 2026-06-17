#include <stdio.h>

int main() 
{
    int r1, c1, r2, c2,i,j,k;
      printf("ENTER THE ROW OF FIRST MATRIX \n");
    scanf("%d",&r1);
    printf("ENTER THE COLUMN  OF FIRST MATRIX \n");
    scanf("%d",&c1);
    int A[r1][c1];
    printf("ENTER THE ROW OF SECOND MATRIX \n");
    scanf("%d",&r2);
     printf("ENTER THE COLUMN  OF SECOND MATRIX \n");
    scanf("%d",&c2);
    int B[r2][c2];
    if(c1 != r2) 
    {
        printf("MULTIPLICATION NOT POSSIBLE\n");
        return 0;
    }

       int C[r1][c2];

   for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        printf("ENTER A[%d][%d]\n",i,j);
        scanf("%d",&A[i][j]);
      }
    }
    for(i=0;i<r2;i++)
    {
    for(j=0;j<c2;j++)
      {
        printf("ENTER B[%d][%d]\n",i,j);
        scanf("%d",&B[i][j]);
      }
    }
    printf("THE FIRST MATRIX IS\n");
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        printf("%d ",A[i][j]);
      }
      printf("\n");
    }
    printf("THE SECOND MATRIX IS\n");
    for(i=0;i<r2;i++)
    {
      for(j=0;j<c2;j++)
      {
        printf("%d ",B[i][j]);
      }
      printf("\n");
    }
     printf("THE MULTIPLICATION OF MATRIX IS\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++) 
        {
            C[i][j] = 0;

            for( k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];

            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
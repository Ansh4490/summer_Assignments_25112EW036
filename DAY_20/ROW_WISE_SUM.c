#include <stdio.h>

int main()
 {
    int r, c,i,j,rowsum;
      printf("ENTER THE ROW OF MATRIX \n");
    scanf("%d",&r); 
    printf("ENTER THE COLOUMN  OF MATRIX \n");
    scanf("%d",&c);

    int A[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {    
            printf("ENTER A[%d]:",i);
            scanf("%d", &A[i][j]);
        }
    }
     printf("THE MATRIX IS\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d ",A[i][j]);
      }
      printf("\n");
    }
    for(i =0;i<r;i++) 
    {
        rowsum = 0;

        for(j = 0; j < c; j++)
        {
            rowsum += A[i][j];
        }
        printf("THE SUM OF %d ROW IS %d\n", i + 1, rowsum);
        
    }

    return 0;
}
#include <stdio.h>

int main()
 {
    int r, c,i,j,coloumnsum;
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
    for(j =0;j<c;j++) 
    {
        coloumnsum = 0;

        for(i = 0; i <r; i++)
        {
           coloumnsum += A[i][j]; 
        }
        
        printf("THE SUM OF %d COLOUMN IS %d\n", i + 1, coloumnsum);
        
    }

    return 0;
}
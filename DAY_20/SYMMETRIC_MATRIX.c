#include <stdio.h>

int main() 
{
    int n,i,j, c = 1;

      printf("ENTER THE ROW OR COLOUMN OF FIRST MATRIX \n");
    scanf("%d",&n);


    int A[n][n];
   for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
      {
        printf("ENTER A[%d][%d]\n",i,j);
        scanf("%d",&A[i][j]);
      }
    }
    
     printf("THE MATRIX IS\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d ",A[i][j]);
      }
      printf("\n");
    }
    for(i=0;i<n;i++)
 {
        for(j = 0; j < n; j++)
         {
            if(A[i][j] != A[j][i])
             {
                c = 0;

                break;
            }
        }
    }

    if(c==1)
    {
        printf("THIS IS SYMMETRIC MATRIX");
    }
    else
    {
        printf("THIS IS NOT SYMMETRIC MATRIX");
    }
    return 0;
}
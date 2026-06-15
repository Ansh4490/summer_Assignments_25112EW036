#include<stdio.h>
int main()
{
    int r1,c1,n,i,j,sd=0;
    printf("ENTER THE ROW OF FIRST MATRIX \n");
    scanf("%d",&r1);
     printf("ENTER THE COLUMN  OF FIRST MATRIX \n");
    scanf("%d",&c1);
    n=r1*c1;
    int A[r1][c1];
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        printf("ENTER A[%d][%d]\n",i,j);
        scanf("%d",&A[i][j]);
      }
    }
    printf("THE MATRIX IS\n");
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        printf("%d ",A[i][j]);
      }
      printf("\n");
    }
   
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        if(i==j)
        {
        sd+=A[i][j];
        }
      }
      
    }
    
    printf("THE SUM OF DIAGONAL IS %d",sd);
   
return 0;

}
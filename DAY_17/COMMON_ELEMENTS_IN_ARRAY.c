#include<stdio.h>
int main() 
{
    int n, m,i,j;
    printf("ENTER THE NUMBER OF ELEMNTS IN FIRST ARRAY\n");
    scanf("%d",&n);
    int A[n];

    for(i=0;i<n;i++)
    {    
        printf("ENTER A[%d]:",i);
        scanf("%d", &A[i]);
    }
    printf("THE FIRST ARRAY IS\n");
     for(i =0; i<n; i++)
     {
    printf("%d ",A[i]);
     }
    printf("\nENTER THE NUMBER OF ELEMNTS IN SECOND ARRAY\n");
    scanf("%d",&m);
      int B[m];
   for(i =0; i<m; i++)
    {      
        printf("\nENTER B[%d]:",i);
        scanf("%d", &B[i]);
    }   
    printf("\nTHE SECOND ARRAY IS\n");

      for(i =0; i<m; i++)
     {
         printf("%d ",B[i]);
     }

    printf("\n COMMON ELEMENTS IN BOTH ARRAYS ARE:\n");

    for(i=0;i<n;i++)
     {

        for(j=0;j<m;j++) 
        {
          if(A[i]==B[j])
             {
               printf("%d ",A[i]);
            }
        }
    }

    return 0;
}
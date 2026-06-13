#include<stdio.h>
int main()
{
    int n,m,i;
    printf("ENTER THE NUMBER OF ELEMNTS IN FIRST ARRAY\n");
    scanf("%d",&n);
    int A[n];
    printf("ENTER THE NUMBER OF ELEMNTS IN SECOND ARRAY\n");
    scanf("%d",&m);
    int B[m];
   
    for(i =0; i<n; i++)
    {      
        printf("ENTER A[%d]:\n",i);
        scanf("%d", &A[i]);
        
    }
    printf("THE FIRST ARRAY IS\n");
     for(i =0; i<n; i++)
     {
    printf("%d ",A[i]);
     }
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
    printf("\nAFTER MERGING THE ARRAY IS\n");
       int C[n+m];
     for(i =0; i<n; i++)
     {
        C[i]=A[i];

     }
      for(i =0; i<m; i++)
      {
        C[n+i]=B[i];

      }
      for(i =0; i<n+m; i++)
      {
        printf("%d ",C[i]);

      }
    return 0;
    }


#include <stdio.h>
int main()
 {
    int n,i,j,temp;
     printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d", &n);

    int  A[n];

    for(int i = 0; i < n; i++)
    {
        printf("ENTER A[%d]:\n",i);
        scanf("%d", &A[i]);
    }
     printf("\nARRAY BEFORE SORTING\n");
    for(i=0;i<n;i++)
    {

        printf("%d ", A[i]);
    }
      
    for(i=0;i<n-1;i++) 
    {
        for(j=i+1;j<n;j++)
         {
            if(A[i] < A[j])
             {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("\nARRAY AFTER SORTING\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
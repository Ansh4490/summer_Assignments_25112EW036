#include <stdio.h>
int main()
{
    int n, sum,i,j;
    int A[50];
    
    printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d", &n);

    for(i =0; i<n; i++)
    {      
        printf("ENTER A[%d]:\n",i);
        scanf("%d", &A[i]);
    }
    printf("ENTER TE SUM\n");
    scanf("%d", &sum);

    for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
         {
            if(A[i]+A[j]==sum)
            {
                printf(" THE PAIR OF NUMBER WHICH IS EQUAL TO THE SUM IS (%d,%d)\n",A[i], A[j]);
            }
        }
    }

    return 0;
}

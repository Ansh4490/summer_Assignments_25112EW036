#include <stdio.h>
int main() 
{
    int n,i,j,dupli;
    int A[50];

    printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d", &n);

   for(i =0; i<n; i++)
    {      
        printf("ENTER A[%d]:\n",i);
        scanf("%d", &A[i]);
    }

    printf("ARRAY AFTER REMOVING DUPLICATES\n");

    for(i =0;i<n;i++)
     {
        dupli=0;

        for(j=0;j<i;j++) 
        {
            if(A[i] == A[j])
             {
                dupli = 1;
                break;
            }
        }

        if(dupli!=1)
            printf("%d ",A[i]);
    }

    return 0;
}
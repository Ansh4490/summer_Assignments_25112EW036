#include <stdio.h>
int main()
 {
    int n,i,j;
    int A[50];
   printf("ENETER THE NUMBER OF ELEMENTS\n");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("ENTER A[%d]:",i);
        scanf("%d", &A[i]);
    }
    printf("DUPLICATES ELEMENTS ARE: ");

    for(i = 0; i < n; i++) 
    {
        for(j = i + 1; j < n; j++)
         {
            if(A[i] == A[j])
             {
                printf("%d ", A[i]);
                break;
            }
        }
    }

    return 0;
}
#include <stdio.h>

int main() 
{
    int n1, n2,i,j;
     
    printf("ENTER THE SIZE OF FIRST ARRAY\n");
    scanf("%d", &n1);
    int A[n1];

    for(i = 0; i < n1; i++)
    {   
        printf("ENTER A[%d]:",i);
        scanf("%d", &A[i]);
    }
    
    printf("ENTER THE SIZE OF SECOND ARRAY\n");
    scanf("%d", &n2);
    int B[n2];

    for(i = 0; i < n2; i++)
    {
        printf("ENTER B[%d]:",i);
        scanf("%d", &B[i]);
    }
     i = 0, j = 0;

    while(i < n1 && j < n2)
     {
        if(A[i] < B[j])
            printf("%d ", A[i++]);
        else
            printf("%d ", B[j++]);
    }

    while(i < n1)
        printf("%d ", A[i++]);

    while(j < n2)
        printf("%d ", B[j++]);

    return 0;
}
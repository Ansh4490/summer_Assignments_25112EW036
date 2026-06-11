#include<stdio.h>
int main()
 {
    int n,i,first;
    int A[50];
    printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d", &n);;

    for(i = 0;i<n;i++)
    {
        printf("ENTER A[%d]:",i);
        scanf("%d", &A[i]);
    }
    printf("INPUT ARRAY IS\n");
    for(i = 0;i<n;i++)
    {
            printf("%d ",A[i]);
    }
     printf("\nROTATED ARRAY TO THE LEFT BY 1 IS\n");
    first = A[0];

    for(i=0;i<n-1;i++)
    {
        A[i] = A[i + 1];
    }
    A[n - 1] = first;

    for(int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
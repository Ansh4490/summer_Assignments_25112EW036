#include<stdio.h>
int main()
 {
    int n,i,last;
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
     printf("\nROTATED ARRAY TO THE RIGHT BY 1 IS\n");
    last=A[n-1];

   for(i=n-1 ;i>0;i--)
    {
        A[i] = A[i-1];
    }
    A[0] = last;            

    for(int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
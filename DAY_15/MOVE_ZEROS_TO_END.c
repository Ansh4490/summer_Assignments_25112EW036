#include<stdio.h>
int main()
 {
    int n,i,ind=0;
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
     printf("\n AFTER MOVING ZEROS TO THE END\n");

    for(i=0;i<n;i++)
    {
       if(A[i]!=0)
       {
        A[ind]=A[i];
    
       ind++;
       }
    }
    while(ind<n)
    {
        A[ind]=0;
        ind++;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
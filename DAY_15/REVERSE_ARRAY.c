#include <stdio.h>
int main()
 {
    int  A[50];
    int n,i;

    printf("ENTER NUMBER OF ELEMENT\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {   
        printf("ENTER A[%d]\n",i);
        scanf("%d", &A[i]);
    }
     printf("INPUT ARRAY IS:\n");
    for(i = 0; i<n; i++) 
    {   
       printf("%d ",A[i]);
    }
    printf("\nREVERSED  ARRAY IS:\n");
    for(i =n-1; i>=0; i--) 
    {   
       printf("%d ",A[i]);
    }
    return 0;
}
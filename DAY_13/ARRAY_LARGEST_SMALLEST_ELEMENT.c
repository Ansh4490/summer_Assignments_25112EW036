#include<stdio.h>
int main()
{
    int i,n,A[50],small,large;
    printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("ENTER A[%d]:\n",i);
      scanf("%d",&A[i]);
    }
    printf("ARRAY ELEMENTS ARE\n");

    for(i=0;i<n;i++)
    {
      printf("%d ",A[i]);
    }
    small=A[0];
    large=A[0];
     for(i=0;i<n;i++)
    {
     if(small>A[i])
     {
     small=A[i];
     } 
     if(large<A[i])
     {
     large=A[i];
     }
    }
    printf("\nTHE SMALLEST ELEMENT OF ARRAY IS %d \n",small);
    printf("THE LARGEST ELEMENT OF ARRAY IS %d ", large);
    return 0;
}
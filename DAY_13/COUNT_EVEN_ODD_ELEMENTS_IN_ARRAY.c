#include<stdio.h>
int main()
{
    int i,n,A[50],even=0,odd=0;
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
    
     for(i=0;i<n;i++)
    {
     if(A[i]%2==0)
     {
      even++;
     } 
     else
     {
    odd++;
     }
    }
    printf("\nTHE EVEN ELEMENT IN ARRAY ARE %d \n",even);
    printf("THE ODD ELEMENT IN ARRAY ARE %d ",odd);
    return 0;
}
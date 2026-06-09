#include<stdio.h>
int main()
{
    int i,n,A[50],sum=0,avg=0;
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
        sum+=A[i];
    }
    for(i=0;i<n;i++)
    {
        avg=sum/n;
    }
    printf("\nTHE SUM OF ARRAY IS %d\n",sum);
    printf("THE AVERAGE OF ARRAY IS %d",avg);
    return 0;
}
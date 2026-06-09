#include<stdio.h>
int main()
{
    int i,n,A[50];
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
    return 0;
}
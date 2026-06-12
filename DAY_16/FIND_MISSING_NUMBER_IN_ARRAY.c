#include<stdio.h>
int main()
{
int n,sum=0,i,total,miss;

printf("ENTER NUMBER OF ELEMENTS\n");
scanf("%d",&n);
int A[n-1];
for(i=0;i<n-1;i++)
{
    printf("ENTER A[%d]:\n",i);
    scanf("%d",&A[i]);

}
for(i=0;i<n-1;i++)
{
   sum+=A[i];
    
}
total=n*(n+1)/2;
miss=total-sum;
printf("MISSING NUMBER IN ARRAY IS %d\n",miss);

return 0;
}
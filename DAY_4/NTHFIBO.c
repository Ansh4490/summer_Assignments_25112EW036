#include<stdio.h>
int main()
{
int i,n,term1=0,term2=1;
int nextterm;
printf("ENTER THE NUMBER OF TERMS\n");
scanf("%d",&n);
if(n==0||n==1)
{
    printf("fib(%d):%d",n,n);
    return 0;
}
for(i=3;i<=n;i++)
{
 nextterm=term1+term2;
   term1=term2;
   term2=nextterm;
}
printf("fib(%d):%d",n,nextterm);
return 0;
}
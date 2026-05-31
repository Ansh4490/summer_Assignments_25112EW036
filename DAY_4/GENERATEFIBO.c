#include<stdio.h>
int main()
{
int i,n,term1=0,term2=1;
int nextterm=term1+term2;
printf("ENTER THE NUMBER OF TERMS\n");
scanf("%d",&n);
printf("FIBONACCI SERIES:%d\t%d\t",term1,term2);
for(i=3;i<=n;i++)
{
   printf("%d\t",nextterm); 
   term1=term2;
   term2=nextterm;
   nextterm=term1+term2;
}
return 0;
}
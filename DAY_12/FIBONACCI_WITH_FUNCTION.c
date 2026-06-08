#include<stdio.h>
void fibo(int n)
{
int i,term1=0,term2=1;
int nextterm=term1+term2;
printf("FIBONACCI SERIES:%d\t%d\t",term1,term2);
for(i=3;i<=n;i++)
{
   printf("%d\t",nextterm); 
   term1=term2;
   term2=nextterm;
   nextterm=term1+term2;
}

}
int main()
{
    int n;
    printf("ENTER THE NUMBER OF TERMS\n"); 
scanf("%d",&n);
fibo (n);
return 0;
}

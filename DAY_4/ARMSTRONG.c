#include<stdio.h>
#include<math.h>
int main()
{
int n,n1,d,r=0,c=0;
printf("ENTER THE THE NUMBER\n");
scanf("%d",&n);
n1=n;
while (n>0)
{
n=n/10;
c++;
}
n=n1;
while(n>0)
{
d=n%10;
r=r+pow(d,c);
n=n/10;
}
if(n1==r)
{
 printf("%d IS AN ARMSTRONG NUMBER",n1);
}
else
{
 printf("%d IS NOT AN ARMSTRONG NUMBER",n1);
}
return 0;
}

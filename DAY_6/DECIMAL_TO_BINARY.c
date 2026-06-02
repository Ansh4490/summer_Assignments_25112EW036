#include<stdio.h>
#include<math.h>
int main()
{
int d,b=0;
int n,i;
printf("ENTER THE DECIMAL NUMBER\n");
scanf("%d",&n);
for(i=0;n>0;i++)
{
    d=n%2;
    n=n/2;
    b=b+(pow(10,i)*d);
}
printf("TE DECIMAL NUMBER CONVERSION IN BINARY NUMBER IS:%d",b);
return 0;
}
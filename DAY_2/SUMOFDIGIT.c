#include<stdio.h>
int main()
{
    int n,d,sum=0,n1;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
     d=n%10;
     sum+=d;
     n=n/10;
    }
 printf("THE SUM OF DIGIT OF NUMBER  %d IS %d",n1,sum);


return 0;


}
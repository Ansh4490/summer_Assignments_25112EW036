#include<stdio.h>
int main()
{
    int n,d,rev=0,n1;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
     d=n%10;
     rev=rev*10+d;
     n=n/10;
    }
 printf("THE REVERSE OF NUMBER  %d IS %d",n1,rev);


return 0;


}
#include<stdio.h>
int main()
{
    int n,d,pro=1,n1;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
     d=n%10;
     pro=pro*d;
     n=n/10;
    }
 printf("THE REVERSE OF NUMBER  %d IS %d",n1,pro);


return 0;


}
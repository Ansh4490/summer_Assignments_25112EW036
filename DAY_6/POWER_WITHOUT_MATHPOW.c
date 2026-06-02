#include<stdio.h>
int main()
{
    int n,power,i,result=1;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    printf("ENTER THE POWER\n");
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
     result*=n;
    }
printf("%d TO THE POWER %d IS:%d",n,power,result);
return 0;
}
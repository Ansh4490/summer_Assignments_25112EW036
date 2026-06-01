#include<stdio.h>
int main()
{
    int n,n1,sum=0,digit,i,fact;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        digit=n%10;
        fact=1;
        for(i=1;i<=digit;i++)
        {
            fact*=i;
        }
        sum+=fact;
        n=n/10;
    }
    if(sum==n1)
    {
     printf("%d IS A STRONG NUMBER\n",n1);
    }
    else
    {
   printf("%d IS NOT A STRONG NUMBER\n",n1);
    }
   return 0; 
}
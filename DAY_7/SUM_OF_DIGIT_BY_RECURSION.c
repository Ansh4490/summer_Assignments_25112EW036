#include<stdio.h>
int sumofdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
return (n%10+sumofdigits(n/10));
    }
}

int main()
{
    int n,res,n1;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    n1=n;
res=sumofdigits(n);
printf("THE SUM OF DIGITS OF %d IS %d",n1,res);
return 0;
}
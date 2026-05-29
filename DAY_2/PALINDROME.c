#include<stdio.h>
int main()
{
    int n,n1,d,rev=0;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==n1)
    {
     printf("%d NUMBER IS A PALINDROME NUMBER",n1);
    }
    else
    {
          printf("%d NUMBER IS NOT A PALINDROME NUMBER",n1);
    }
    return 0;
}
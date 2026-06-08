#include<stdio.h>
void palin(int n)
{
int d,rev=0,n1;
n1=n;
while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if(n1==rev)
{
printf(" %d IS PALINDROME NUMBER",n1);
}
else
{
printf("%d IS NOT PALINDROME NUMBER",n1);
}
}
int main()
{
    int n;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    palin(n);
    return 0;
}
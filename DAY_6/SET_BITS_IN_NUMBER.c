#include<stdio.h>
int main()
{
    int n;
    int c=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    while(n)
    {
        c+=n&1;
       n>>=1;
    }
    printf("NUMBER OF BITS ARE:%d",c);
return 0;
}
#include<stdio.h>
 void prime(int x)
{
    int i,fm=0;
    for(i=2;i<=x/2;i++)
    {
    if(x%i)
    {
        fm=1;
        break;
    }
    }
if(fm==1)
{
   printf("THE NUMBER %d IS NOT PRIME NUMBER",x);
}
else
{
printf("THE NUMBER %d IS PRIME NUMBER",x);
}
 
}
int main()
{
int x;
printf("ENTER THE NUMBER\n");
scanf("%d",&x);

prime(x);

return 0;
}
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
 printf("THE SUM OF %d NATURAL NUMBER IS %d",n,sum);


return 0;


}
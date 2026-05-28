#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
 printf("THE FACTORIAL OF %d  NUMBER IS %d",n,fact);


return 0;


}
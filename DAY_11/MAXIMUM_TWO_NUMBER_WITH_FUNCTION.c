#include<stdio.h>
int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
       return y;
    }
}
int main()
{
    int a,b;
    printf("ENTER THE FIRST NUMBER\n");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER\n");
    scanf("%d",&a);
    printf("THE MAXIMUM NUMBER BETWEEN BOTH  NUMBER IS %d\n",max(a,b));
    return 0;
}
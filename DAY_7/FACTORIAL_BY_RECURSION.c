#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
    {
    return 1;
    }
    else{
        return n*fact(n-1);
    }

}
int main()
{
    int n,n1,res;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    n1=n;
res=fact(n);
printf("THE FACTORIAL OF %d IS :%d",n1,res);
return 0;
}
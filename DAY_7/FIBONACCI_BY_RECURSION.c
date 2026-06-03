#include<stdio.h>
int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
      return fibo(n-1)+fibo(n-2);
    }
    
}
int main()
{
    int n,i,f;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
 printf("THE FIBONACCI SERIES IS:\n");
    for(i=0;i<n;i++)
    {
        f=fibo(i);
        printf("%d\t",f);
    }
    return 0;
}


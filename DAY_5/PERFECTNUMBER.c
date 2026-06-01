#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }

    }
    if(sum==n)
    {
         printf("%d IS A PERFECT NUMBER\n",n); 

    }
    else
    {
  printf("%d IS THE  NOT A PERFECT NUMBER\n",n); 
    }
    return 0;
}
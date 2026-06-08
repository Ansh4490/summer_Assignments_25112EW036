#include<stdio.h>
void perfect(int n)
{
int sum=0,i;

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
    }}

int main()
{
    int n;
     printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
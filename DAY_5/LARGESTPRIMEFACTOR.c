#include<stdio.h>
int main()
{
    int n,largest,i;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    largest=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(largest<i)
            {
                largest=i;
            }
        }
    }
      printf("THE LARGEST PRIME FACTOR OF %d IS:%d",n,largest);
    return 0;
}
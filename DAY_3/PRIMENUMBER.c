#include<stdio.h>
int main()
{
    int n,i,pin=1;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            pin=0;
            break;
        }

    }
    if(pin==0)
    {
        printf("%d IS NOT A PRIME NUMBER",n);
    }

        else 
        {
          printf("%d IS  A PRIME NUMBER",n);
        }
        return 0;
    }

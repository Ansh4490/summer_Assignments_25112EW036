#include <stdio.h>
int main()
{
    int strrange, endrange, i, j, pin;

    printf("ENTER THE STARTING RANGE OF NUMBER\n");
    scanf("%d",&strrange);

     printf("ENTER THE ENDING RANGE OF NUMBER\n");
    scanf("%d", &endrange); 

    for (i=strrange;i<=endrange;i++)
    {
        if (i == 1 || i == 0)
        {
            continue;
        }
        pin=1;

        for (j = 2; j <= i/2;j++)
        {
            if (i % j == 0) 
            {
                pin=0;
                break;
            }
        }
        if (pin==1)
            printf("%d IS THE PRIME NUMBER\n",i);
    }

    return 0;
}

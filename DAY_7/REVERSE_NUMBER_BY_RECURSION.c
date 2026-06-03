#include <stdio.h>
int rev(int n, int r)
 {
   
    if (n == 0)
    {
        return r;
    }
    else
    {
    return rev(n / 10, r* 10 + n % 10);
    }
    }
int main()
{
    int num, res;

    printf("ENTER THE NUMBER\n ");
    scanf("%d", &num);

    res = rev(num, 0);

    printf("THE REVERSE OF %d IS %d\n",num, res);

    return 0;
}
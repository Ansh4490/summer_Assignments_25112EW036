#include <stdio.h>
#include<string.h>

int main() 
{
    char str[1000], ch;
    int count = 0,i;

    printf("ENTER THE STRING\n ");
    fgets(str, sizeof(str), stdin);

    printf("ENTER THE CHARACTER TO FIND THE FREQUENCY\n ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (ch == str[i]) 
        {
            count++;
        }
    }

    printf("FREQUENCY OF '%c' = %d\n", ch, count);

    return 0;
}
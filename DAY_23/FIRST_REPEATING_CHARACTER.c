#include <stdio.h>

int main() 
{
    char str[100];
    int i,j;
printf("ENTER THE STRING\n");
    scanf("%s",&str);

    for(i = 0; str[i] != '\0'; i++)
     {
        for(j = i + 1; str[j] != '\0'; j++)
         {
            if(str[i] == str[j]) 
            {
                printf("THE FIRST REPEATING CHARACTER IS %c", str[i]);
                return 0;
            }
        }
    }

    printf("THERE IS NO REPEATING CHARACTER\n");

    return 0;
}
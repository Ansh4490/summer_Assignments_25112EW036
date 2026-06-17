#include <stdio.h>

int main() 
{
    char str[100];

     printf("ENTER THE STRING\n");
    scanf("%s",str);
   printf("THE STRING IN LOWERCASE IS %s\n",str);

    for(int i = 0; str[i] != '\0'; i++)
     {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("THE STRING IN UPPERCASE IS%s", str);

    return 0;
}
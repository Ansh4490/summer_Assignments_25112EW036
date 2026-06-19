#include <stdio.h>

int main()  
{
    char str[100];
    int i,j,count;
    printf("ENTER THE STRING\n");
    scanf("%s",&str);
    printf("TE STRING IS %s\n",str);
 
    for(i = 0; str[i] != '\0'; i++) 
    {
        count = 0;

        for(j = 0; str[j] != '\0'; j++) 
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count == 1) 
        {
            printf(" THE FIRST NON REPEATING CHARACTER IS %c", str[i]);
            break;
        }
    }

    return 0;
}
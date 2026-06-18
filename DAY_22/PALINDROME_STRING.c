#include <stdio.h>
#include<string.h>
int main() 
{
    char str[100];
    int len,i;
    int flag = 1;

     printf("ENTER A STRING\n ");
    scanf("%s", str);
    printf("THE STRING IS %s\n",str);
     len = strlen(str);

    for(i = 0; i < len / 2; i++) 
    {
        if(str[i] != str[len - i - 1])
         {
            flag = 0;
            break;
        }
    }

    if(flag==1)
    {
        printf("STRING IS PALINDROME");
    }
    else
    {
        printf("STRING IS NOT PALINFROME");
    }
    return 0;
}
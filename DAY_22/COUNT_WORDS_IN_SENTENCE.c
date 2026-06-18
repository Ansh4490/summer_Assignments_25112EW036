#include <stdio.h>
#include<string.h>

int main() {
    char str[200];
    int words = 1;
    int i;
      printf("ENTER A STRING\n ");
    scanf("%[^\n]s", str);
    printf("THE STRING IS %s\n",str);
    for(i = 0; str[i] != '\0'; i++)
     {
        if(str[i] == ' ')
        {
            words++;
        }
    }

    printf("THE TOTAL NUMBER OF WORDS IN STRING IS = %d", words);

    return 0;
}
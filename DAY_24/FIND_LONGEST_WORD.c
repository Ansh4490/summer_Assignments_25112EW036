#include <stdio.h>
#include <string.h>

int main()
 {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

 printf("ENTER A STRING\n ");
    scanf("%[^\n]s", str);
    while(1) 
    {
        if(str[i] != ' ' && str[i] != '\0') 
        {
            word[j++] = str[i];
        }
        else {
            word[j] = '\0';

            if(strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }
        i++;
    }

    printf(" THE LONGEST WORD IS %s", longest);

    return 0;
}
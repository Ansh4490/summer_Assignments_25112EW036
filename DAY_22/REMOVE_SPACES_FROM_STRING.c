#include <stdio.h>

int main() {
    char str[100], result[100];
    int j = 0;
    int i;
    printf("ENTER A STRING\n ");
    scanf("%[^\n]s", str);
    printf("THE STRING IS %s\n",str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ')
            result[j++] = str[i];
    }

    result[j] = '\0';

    printf("THE STRING WITHOUT SPACES IS %s", result);

    return 0;
}
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    int max = 0;
    char ch;
printf("ENTER THE  STRING: ");
    scanf("%s", &str);

    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    for( i = 0; i < 256; i++) 
    {
        if(freq[i] > max) 
        {
            max = freq[i];
            ch = i;
        }
    }

    printf("THE MAXIMUM OCCURING CHARACTER IS %c", ch);

    return 0;
}
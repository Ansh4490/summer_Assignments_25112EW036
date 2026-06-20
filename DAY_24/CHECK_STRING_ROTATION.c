#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[100], str2[100], temp[200];
    printf("ENTER THE FIRST STRING: ");
    scanf("%s", &str1);
    printf("ENTER THE SECOND STRING: ");
    scanf("%s", &str2);

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2))
    {
        printf("STRING ROTATION IS POSSIBLE");
    }
    else
    {
        printf("STRING ROTATION IS NOT POSSIBLE");
    }
    return 0;
}
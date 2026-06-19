#include <stdio.h>

int main() 
{
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, flag = 1;

    printf("ENTER THE FIRST STRING: ");
    scanf("%s", &str1);

    printf("ENTER THE SECOND STRING: ");
    scanf("%s", &str2);

    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }
    
    if (len1 != len2) 
    {
        printf("STRINGS ARE NOT ANAGRAM");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        int found = 0;
        for (j = 0; j < len2; j++) 
        {
            if (str1[i] == str2[j]) 
            {
                str2[j] = '*';   
                found = 1;
                break;
            }
        }
        if (found!=1)
         {
            flag = 0;
            break;
        }
    }

    if (flag==1)
    {
        printf("STRING ARE ANAGRAM");
    }
    else
    {
        printf("STRINGS ARE NOT ANAGRAM");
    }
    return 0;
}
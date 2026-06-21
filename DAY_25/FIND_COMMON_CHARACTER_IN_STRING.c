#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i,j,n1,n2;
    
    printf("ENTER THE FIRST STRING\n");
    scanf("%s", &str1);
    
    printf("ENTER THE SECOND STRING\n");
    scanf("%s", &str2);
   
    

    printf("COMMON CHARACTERS: ");

    for(i = 0; str1[i] != '\0'; i++) 
    {
        for(j = 0; str2[j] != '\0'; j++) 
        {
            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}
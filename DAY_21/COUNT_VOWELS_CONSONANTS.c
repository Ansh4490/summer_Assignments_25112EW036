#include <stdio.h>
int main() 
{
    char str[100];
    char ch;
    int vowels = 0, consonants = 0;
    printf("ENTER THE STRING\n");
    scanf("%s",str);
   printf("THE STRING IS %s\n",str);

    for(int i = 0; str[i] != '\0'; i++) 
    {
          ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
         {

            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
            else
            {
                consonants++;
            }
        }
    }

    printf("THE VOWELS IN STRING IS %d\n", vowels);
    printf("THE CONSONANTS IN STRING IS = %d", consonants);

    return 0;
}
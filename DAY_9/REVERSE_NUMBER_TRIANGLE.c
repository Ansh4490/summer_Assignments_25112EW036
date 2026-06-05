#include<stdio.h>
int main()
{
    int n,i,j;
    char ch='A';
    printf("ENTER THE NUMBER OF ROWS\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
         printf("%C",ch+i-1);
         
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
     printf("THE FACTORS OF %d ARE:\n",n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
           printf("\t%d",i);  
        }
    }
    return 0;
}
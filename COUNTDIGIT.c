#include<stdio.h>
int main()
{
    int n,dig=0,n1;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    n1=n;
   while(n>0)
   {
    n=n/10;
    dig++;
   }
 printf("THE NUMBER OF DIGIT IN THE NUMBER %d IS %d",n1,dig);


return 0;


}
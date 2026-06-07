#include<stdio.h>
int sum(int x,int y)
{
    int res;
    res=x+y;
    return res;
}
int main()
{
  int a,b;
  int s;
  printf("ENTER THE FIRST NUMBER\n");
  scanf("%d",&a);
   printf("ENTER THE SECOND NUMBER\n");
  scanf("%d",&b);
  s=sum(a,b);
  printf(" THE SUM OF TWO NUMBER IS %d",s);
  return 0;
}

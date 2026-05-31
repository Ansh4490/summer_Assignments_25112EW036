#include <math.h>
#include <stdio.h>
int main() {
  int strrange,endrange, n, n1, d, c = 0;
  int r = 0;
  printf("ENTER THE STARTING RANGE GREATER THAN 9\n ");
  scanf("%d",&strrange);
  printf("ENTER THE ENDING RANGE\n ");
    scanf("%d",&endrange);
  printf("Armstrong numbers between %d and %d are: ",strrange,endrange);

  for (n=strrange+1;n<endrange;n++) 
  {
  n1=n;

    while (n1>0) 
    {
    n1=n1/10;
    c++;
    }
    n1=n;
    while (n1>0) 
    {
      d =n1%10;
      r= r+pow(d,c);
     n1=n1/10;
    }
    if (r==n) 
    {
      printf("%d ",n);
    }

    c = 0;
    r = 0;
  }

  return 0;
}
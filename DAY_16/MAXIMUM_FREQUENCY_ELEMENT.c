#include<stdio.h>
int main()
{
int n,i,j,c;
int maxfreq=0,element;
int A[50];
    printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER A[%d]:\n",i);
       scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++)
    {
       c=1;
       for(j=i+1;j<n;j++)
        {
        if(A[i]==A[j])
        {
            c++;
        }
        }
    
    if(c>maxfreq)
    {
        maxfreq=c;
        element=A[i];
    }
}
  printf("THE MAXIMUM FREQUENCY OF ELEMENT IS %d AND ELEMENT IS %d\n",maxfreq,element);
  return 0;
}
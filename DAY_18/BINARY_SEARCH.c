#include <stdio.h>
int main() 
{
    int n,low,high,mid,i,j,srch;
   printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d", &n);

    int A[n];

    for(i=0;i<n;i++)
     {
        printf("ENTER A[%d]:\n",i);
        scanf("%d", &A[i]);
     }
     
   printf("\nENTER THE ELEMENT TO BE SEARCHED\n");
    scanf("%d", &srch);

    low=0;
    high=n-1;

    while(low <= high)
     {
        mid=(low+high)/ 2;

        if(A[mid]==srch)
         {
            printf("\nTHE ELEMENT %d is FOUND AT POSITION %d",srch, mid + 1);
            return 0;
        }
        else if(A[mid]<srch)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("ELEMENT NOT FOUND\n");

    return 0;
}
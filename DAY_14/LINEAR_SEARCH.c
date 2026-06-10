#include <stdio.h>
int main()
 {
    int  A[50];
    int n,i, srch, pos=0;

    printf("ENTER NUMBER OF ELEMENT\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {   
        printf("ENTER A[%d]\n",i);
        scanf("%d", &A[i]);
    }
     printf("ENTER THE ELEMEMT WHICH YOU WANT TO SEARCH\n");
      scanf("%d", &srch);

    for(i = 0; i<n; i++) 
    {
        if(A[i] ==srch) 
        {
            printf("ELEMENT %d IS FOUND AT POSTION %d",srch, i + 1);
             pos= 1;
            break;
        }
    }

    if(pos==0)
    {
        printf("ELEMENT NOT FOUND");
    }
    return 0;
}
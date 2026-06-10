#include <stdio.h>
int main()
 {
    int  A[50];
    int n,i, srch, c=0;

    printf("ENTER NUMBER OF ELEMENT\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {   
        printf("ENTER A[%d]\n",i);
        scanf("%d", &A[i]);
    }
     printf("ENTER THE ELEMEMT WHICH FREQUENCY YOU WANT TO KNOW\n");
      scanf("%d", &srch);

    for(i = 0; i<n; i++) 
    {
        if(A[i] ==srch) 
        {
            c++;
        }
    }

    if(c==0)
    {
        printf("ELEMENT NOT PRESENT"); 
    } 
    else{
        printf("THE FREQUENCY OF ELEMENT %d IS %d",srch,c);
    }
    return 0;
}
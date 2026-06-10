#include <stdio.h>
int main()
 {
    int  A[50];
    int n,i, max,secmax;

    printf("ENTER NUMBER OF ELEMENT\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {   
        printf("ENTER A[%d]\n",i);
        scanf("%d", &A[i]);
    }
     max=A[0];
     secmax=A[0];

    for(i = 0; i<n; i++) 
    {     
        if(max<A[i]) 
        {
            secmax=max;
            max=A[i];
            
        }
    }

        printf("THE SECOND LARGEST ELEMENT IN ARRAY IS %d",secmax);

    return 0;
}
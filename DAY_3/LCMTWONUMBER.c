#include <stdio.h>

int main() {

    int n1, n2, max, lcm;

    printf("Enter THE FIRST INTEGER\n");
     scanf("%d",&n1);
       printf("Enter THE SECOND INTEGER\n");
     scanf("%d",&n2);

    max = (n1 > n2) ? n1 : n2;

    lcm = max;

    while ((lcm % n1 != 0) || (lcm % n2 != 0)) {
        lcm += max;
    }

    printf("The LCM of %d and %d is %d.", n1, n2, lcm);

    return 0;
}
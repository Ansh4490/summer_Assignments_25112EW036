#include<stdio.h>
#include<math.h>
int main() {
    int d,rev=0;
    int n;
    printf("ENTER TE BINARY NUMBER\n");
    scanf("%d",&n);
    for(int i=0;n>0;i++) {
        d=n%10;
        if(d>0)
        {
            rev=rev+pow(2,i);

        }
        n=n/10;
    }
    printf("THE BINARY NUMBER CONVERSION IN DECIMAL NUMBER IS:%d",rev);
    return 0;
}
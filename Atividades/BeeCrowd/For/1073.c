#include <stdio.h>
#include <math.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    for(i=2;i<=a;i+=2){
        int res = pow(i,2);
        printf("%d^2 = %d\n", i, res);
    }
    return 0;
}

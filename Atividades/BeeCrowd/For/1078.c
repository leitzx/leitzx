#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, numero=0;
    scanf("%d", &n);
    for(i=0;i<=18;i++){
        numero+=1;
        int res = numero*n;
        printf("%d x %d = %d\n", numero,n,res);
        i++;
    }
    
    return 0;
}

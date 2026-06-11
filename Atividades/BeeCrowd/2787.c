#include <stdio.h>

int main() {
int l, c, res;
scanf("%d%d", &l,&c);
if ((l + c) % 2 == 0){
    res = 1;
    printf("%d\n", res);}
else{
    res = 0;
    printf("%d\n", res);
    
}

    return 0;
}

//OVERFLOW

#include <stdio.h>

int main(){
    int a,b,na,nb,res;
    char c;
    
    scanf("%d%d", &a, &na);
    scanf(" %c ", &c);
    scanf("%d",&nb);
    
    if(c == '*'){
        res = na*nb;
        if(res>a){
            printf("OVERFLOW\n");
        }
        else{
            printf("OK\n");
        }
    } else if(c == '+'){
        res = na+nb;
        if(res>a){
            printf("OVERFLOW\n");
        }
        else{
            printf("OK\n");
        }
    }

    return 0;
}

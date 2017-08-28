#include <stdio.h>

int main(void){
    int a,b,c,d;
    scanf("%d %d", &a, &b);
    c = 0;
    d = 1;
    while(1){
        printf("%d", d);
        c = c + 1;
        d = d + 1;

        if (b+1 == d){
            printf("\n");
            break;
        }

        if (a == c){
            c = 0;
            printf("\n");
        }else{
            printf(" ");
        }
    }
 }

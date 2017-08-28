#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d", &a);
    b = 1;
    while (1){
        printf("%d %d %d\n",b,b*b,b*b*b);
        printf("%d %d %d\n",b,(b*b)+1,(b*b*b)+1);
        if (b == a){
            break;
        }
        b = b + 1;
    }
}
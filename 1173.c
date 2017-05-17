#include <stdio.h>

int main(void){ 
    int X[10];
    int i, entrada,y=0;
    scanf("%d",&entrada);


    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, entrada);
        entrada = entrada *2;
    }
}
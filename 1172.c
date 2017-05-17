#include <stdio.h>

int main(void){ 
    int X[10];
    int i;

    for(i = 0; i < 10; i++){
        scanf("%d", &X[i]);
        if (X[i] < 1)
            X[i] = 1;
    }

    for (i= 0; i < 10; i++){
        printf("X[%d] = %d\n",i,X[i]);
    }

}
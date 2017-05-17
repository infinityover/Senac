	#include <stdio.h>

int main(void){ 
    double X[100];
    int i;
     for(i = 0; i < 100; i++){
         scanf("%lf",&X[i]);
    }
    
    for(i = 0; i < 100; i++){
        if ( X[i] <= 10) 
        printf("A[%d] = %.1f\n", i, X[i]);
        
    }
}
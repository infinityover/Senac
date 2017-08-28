#include <stdio.h>

int main()

{

    int x, y, z, menor, meio, maior, temporario;

    scanf("%d %d %d", &x, &y, &z);

    menor = x;
    meio = y;
    maior = z;
    if (menor < meio){
        temporario = menor;
        menor = meio;
        meio= temporario;
    }
    if (meio< maior){
        temporario = meio;
        meio = maior;
        maior = temporario;
    }
    if (menor < meio){
        temporario = menor;
        menor = meio;
        meio = temporario;
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",maior,meio,menor,x,y,z);

}
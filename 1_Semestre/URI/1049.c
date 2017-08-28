#include <stdio.h>

int main(void){
    int amin,ahora,bmin,bhora,duracaomin, duracaohora;


    scanf("%d %d %d %d", &ahora,&amin,&bhora,&bmin);

    duracao =0;
    while( 1 ){ //horas
        while( 1 ){ //minutos
            duracao = duracao + 1;
            a = a + 1;
            if (a == 24){
                a = 0;
            }
            if (a == b){
                break;
            }
        }
        duracao = duracao + 1;
        a = a + 1;
        if (a == 24){
            a = 0;
        }
        if (a == b){
            break;
        }
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);

}

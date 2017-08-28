#include <stdio.h>

int main(void){

    int horainicio, minutoinicio, horafim, minutofinal, resultadominuto, resultadohora;

    scanf("%d %d %d %d", &horainicio, &minutoinicio, &horafim, &minutofinal);

    resultadohora = horafim - horainicio;

    if (resultadohora < 0){
        resultadohora = 24 + (horafim - horainicio);
    }

    resultadominuto = minutofinal - minutoinicio;

    if (resultadominuto < 0){
        resultadominuto = 60 + (minutofinal - minutoinicio);
        resultadohora--;
    }

    if (horafim == horainicio && minutofinal == minutoinicio){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resultadohora, resultadominuto);

}
#include "vetor_nao_ordenado.h"

void imprimevetor(int vet[]){
  for(int i = 0; i< ultimo_inserido; i++) printf("%d - %d\n",i, vet[i]);
  printf("\n" );
}

void main(){
    int vetor[50];
    insere(vetor, 1);
    insere(vetor, 100);
    insere(vetor, 50);
    insere(vetor, 10);
    insere(vetor, 100);
    imprimevetor(vetor);
    removetodos(vetor,100);
    imprimevetor(vetor);
}

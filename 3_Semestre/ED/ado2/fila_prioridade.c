#include "fila_prioridade.h"

int main(int argc, char const *argv[]) {
  int fila[50]={0};
  insere(fila,ultimo,10);
  insere(fila,ultimo,50);
  insere(fila,ultimo,30);
  insere(fila,ultimo,70);
  insere(fila,ultimo,60);
  insere(fila,ultimo,20);
  insere(fila,ultimo,80);
  for(int i =0; i<=ultimo; i++){
    printf("Vetor[%d] %d\n",i,fila[i]);
  }
  printf("Removido %d\n",remover(fila,ultimo));
  printf("Removido %d\n",remover(fila,ultimo));
  for(int i =0; i<=ultimo; i++){
    printf("Vetor[%d] %d\n",i,fila[i]);
  }

}

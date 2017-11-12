#ifndef fila_vetor
#define fila_vetor
#include <stdio.h>
#include <stdlib.h>

//tipos elementos
typedef struct fila{
  int valor[10];
  int elementos;
} fila;

//inicializacao da fila
void inicializar(fila *f){
  f-> elementos = 0;
}

//verifica se a fila está vazia
int vazia(fila *f){
  if(f-> elementos == 0){
    return 1;
  }
  return 0;
}

//imprime a fila
void imprimir_fila(fila *f) {
  for(int i = 0; i < f -> elementos; i++){
    printf("%d\n",f -> valor[i]);
  }
}

//adicionar novo elemento a fila
void adicionar(fila *f, int valor_adicionar){
  f -> valor[f -> elementos] = valor_adicionar;
  f -> elementos++;
}

//remove elemento da fila
void remover(fila *f){
  if (vazia(&f)){
    return;
  }

  for(int i = 0; i < f -> elementos; i++){
    f -> valor[i] = f -> valor[i+1];
  }
  f -> elementos--;
}

#endif

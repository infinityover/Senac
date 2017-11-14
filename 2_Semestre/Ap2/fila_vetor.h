#ifndef fila_vetor
#define fila_vetor
#include <stdio.h>
#include <stdlib.h>

//tipos elementos
typedef struct fila{
  int valor[10];
  int inicio;
  int fim;
  int tamanho;
} fila;

//inicializacao da fila
void inicializar(fila *f){
  f-> inicio = 0;
  f-> fim = 0;
  f-> tamanho = 0;
}

//verifica se a fila está vazia
int vazia(fila *f){
  if(f-> inicio == f-> fim){
    return 1;
  }
  return 0;
}


//imprime a fila
void imprimir_fila(fila *f) {
  int j = f -> inicio;
  for(int i = 0; i < f -> tamanho; i++ ){
    if(j >= 10){
      j = 0;
    }
    printf("%d  - pos  %d\n",f -> valor[j],j );
    j++;
  }
}

int cheia(fila *f){
  if(f-> tamanho == 10){
    return 1;
  }
  return 0;
}

//adicionar novo elemento a fila
void adicionar(fila *f, int valor_adicionar){
  if (cheia(f)){
    return;
  }
  if(f -> fim == 10){
    f -> fim = 0;
  }
  int fim = f -> fim;
  f -> valor[fim] = valor_adicionar;

  f -> fim++;
  f -> tamanho++;
}



//remove elemento da fila
void remover(fila *f){
  if (vazia(f)){
    return;
  }
  f -> inicio++;
  f -> tamanho--;

}

#endif

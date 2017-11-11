#include <stdio.h>
#include <stdlib.h>

//tipos elementos
typedef struct n{
  int valor;
  struct n *next;
} elemento;

//inicializacao da fila
void inicializar(elemento *f){
  f-> next = NULL;
  f-> valor = 0;
}

int vazia(elemento *f){
  if(f-> next == NULL){
    return 1;
  }
  return 0;
}

void imprimir_fila(elemento *f) {
  while(f -> next){
    f = f -> next;
    printf("%d\n",f -> valor);
  }
}
//adicionar novo elemento a fila
void adicionar(elemento *f, int valor_adicionar){
  elemento *novo_elemento;
  novo_elemento =(elemento *)malloc(sizeof(elemento));
  novo_elemento -> valor = valor_adicionar;

  while(f->next){
   f = f-> next;
  }

  f-> next = novo_elemento;
}

void remover(elemento *f){
  if (vazia(f)){
    return;
  }

  while(f->next->next){
   f = f-> next;
  }

  f-> next = NULL;
}


int main() {
  elemento fila;
  int elementos;
  inicializar(&fila);
  remover(&fila);
  adicionar(&fila, 10);
  imprimir_fila(&fila);
  remover(&fila);
  adicionar(&fila, 20);
  imprimir_fila(&fila);
  return 0;
}

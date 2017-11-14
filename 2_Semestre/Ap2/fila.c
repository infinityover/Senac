#include <stdio.h>
#include <stdlib.h>
#include "fila_encadeada.h"
int main() {
  elemento fila;
  inicializar(&fila);
  //remover(&fila);
  //adicionar(&fila, 10);
  //imprimir_fila(&fila);
  //  remover(&fila);
  //adicionar(&fila, 20);
  for(int i = 1; i< 11; i++){
    adicionar(&fila, i*10);
    //imprimir_fila(&fila);
  }
  remover(&fila);
  //sadicionar(&fila, 500);
  imprimir_fila(&fila);
  return 0;
}

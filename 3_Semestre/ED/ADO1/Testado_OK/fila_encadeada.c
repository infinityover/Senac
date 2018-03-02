#include "fila_encadeada.h"

int main(){
   Fila fila;


  inicializar(&fila);
  inserir(&fila, 12);
  inserir(&fila, 24);
  inserir(&fila, 12);
  imprimir(&fila);
  remover(&fila);
  inserir(&fila, 12);
  imprimir(&fila);
}

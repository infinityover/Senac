#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pilha_encadeada.h"

int main(){
  Pilha minha_estrutura;

  int temp;

  inicializar(&minha_estrutura);
  inserir(&minha_estrutura, 19);
  inserir(&minha_estrutura, 28);
  inserir(&minha_estrutura, 30);
  inserir(&minha_estrutura, 12);
  imprimir(&minha_estrutura);
  temp=remover(&minha_estrutura);
  temp=remover(&minha_estrutura);
  inserir(&minha_estrutura, 51);
  inserir(&minha_estrutura, 48);
  imprimir(&minha_estrutura);
}

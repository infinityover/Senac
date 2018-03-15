#include "arvore_binaria.h"

int main(int argc, char const *argv[]) {
  node *arvore;
  arvore->valor = 0;
  arvore->esquerda = NULL;
  arvore->direita = NULL;
  printf("agora vai\n" );
  inserir(arvore,10);
  printf("esquerda %d\n",arvore->esquerda->valor);
  printf("direita %d\n",arvore->direita->valor);
  return 0;
}

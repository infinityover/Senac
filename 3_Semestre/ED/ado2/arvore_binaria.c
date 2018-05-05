#include "arvore_binaria.h"
int main(void) {

  arvore *p = createArvore(); /* cria uma árvore */

  inserir(&p, 10);
  inserir(&p, 20);
  inserir(&p, 13);
  inserir(&p, 7);

  imprimeArvore(p);
  if(buscaValor(p, 20)) {
    printf("\nO numero %d pertence a arvore!\n\n",30);
  } else {
     printf("\nO numero %d NAO pertence a arvore!\n\n",30);
  }
  imprimeArvore(p);
  printf("\n");
  remover(&p, 10);
  //imprimeArvore(p);


  return 0;
}

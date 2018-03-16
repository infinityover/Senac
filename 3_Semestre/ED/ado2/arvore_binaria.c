#include "arvore_binaria.h"
int main(void) {

  arvore *p = createArvore(); /* cria uma árvore */

  inserir(&p, 10);
  inserir(&p, 20);
  inserir(&p, 13);
  inserir(&p, 7);

  imprimeArvore(p);
  if(buscaValor(p, 30)) {
    printf("\nO numero 30 pertence a arvore!\n\n");
  } else {
     printf("\nO numero 30 NAO pertence a arvore!\n\n");
  }
  imprimeArvore(p);
  printf("\n");
  remover(p, 10);
  imprimeArvore(p);


  return 0;
}

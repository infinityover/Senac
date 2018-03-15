/*2 - Implemente o TAD árvore binária, com as seguintes operações:
- inserir um novo valor;
- buscar um valor;
- remover um valor;
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct N{
  int valor;
  struct N *esquerda;
  struct N *direita;
}node;

void inserir(node *arv, int dado){
  printf("entrou na funcao\n" );
  if(arv->valor >= dado && arv->esquerda){
    printf("entrou_esquerda\n" );
    inserir(arv->esquerda,dado);
  }else if(arv->valor < dado && arv->direita){
    printf("entrou_direita\n" );
    inserir(arv->direita,dado);
  }else if (arv->valor < dado && !arv->direita){
    printf("inseriu_direita\n" );
    node *novo_no;
    novo_no = malloc(sizeof(node));
    novo_no->valor = dado;
    novo_no->esquerda = NULL;
    novo_no->direita = NULL;
    arv->direita = novo_no;
  }else if (arv->valor > dado && !arv->esquerda){
    printf("inseriu_esquerda\n" );
    node *novo_no;
    novo_no = malloc(sizeof(node));
    novo_no->valor = dado;
    novo_no->esquerda = NULL;
    novo_no->direita = NULL;
    arv->esquerda = novo_no;
  }else{
    printf("inseriu_inicio\n" );
    arv->valor = dado;
  }

}

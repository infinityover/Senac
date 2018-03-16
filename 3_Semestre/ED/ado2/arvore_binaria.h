#include <stdio.h>
#include <stdlib.h>

typedef struct arv {

  int elemento;
  struct arv *subd;
  struct arv *sube;
} arvore;

arvore* createArvore(){
  return NULL;
}

arvore* maioresq(arvore *p){
  while(p->sube != NULL){
    p = p->sube;
  }
  return p;
}


arvore* maiordir(arvore *p){
  while(p->subd != NULL){
    p = p->subd;
  }
  return p;
}

int verificaVazia(arvore *p){
  if(p == NULL)
    return 1;
  else
    return 0;
}

void imprimeArvore(arvore *p){
  if(verificaVazia(p) == 0)
  {
    printf("%d ", p->elemento);
    imprimeArvore(p->sube);
    imprimeArvore(p->subd);
  }
  //printf("\n");
}

void inserir(arvore **p, int valor){
  if(*p == NULL) {
    *p = (arvore*)malloc(sizeof(arvore));
    (*p)->subd = NULL;
    (*p)->sube = NULL;
    (*p)->elemento = valor;
  } else {
    if(valor < (*p)->elemento)
      inserir(&(*p)->sube, valor);
    else
      inserir(&(*p)->subd, valor);
  }
}

int buscaValor(arvore *p, int valor) {
  if(verificaVazia(p)) {
    return 0;
  }

  return p->elemento == valor || buscaValor(p->sube, valor) || buscaValor(p->subd, valor);
}

arvore *verificaValor(arvore *p, int valor) {

  if(verificaVazia(p)) {
    return NULL;
  }
  if (p->elemento == valor) {
      return p;
  }
  if(valor < (p)->elemento)
    return verificaValor(p->sube, valor);
  else
    return verificaValor(p->subd, valor);
}


arvore* remover(arvore *p, int valor) {
  arvore *no = verificaValor(p, valor);
  if(!no) return NULL;
  else{
    if(valor < p->elemento) p->sube = remover(p->sube, valor);
    else if (valor > p->elemento) p->subd = remover(p->subd, valor);
    else if (p->sube) {
      arvore* aux = maiordir(p->sube);
      p->elemento = aux->elemento;
      p->sube = remover(p->sube, aux->elemento);
      if (p->subd) {
        arvore* aux = maioresq(p->subd);
        p->elemento = aux->elemento;
        p->subd = remover(p->subd, aux->elemento);
      } else p = NULL;
    }
  }
  return p;
}

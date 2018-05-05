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


arvore* encontra_maior(arvore *no,int lado){
  while(no){
    if(lado == 1){
      if(!no->sube) break;
      no = no->sube;
    }
    else {
      if(!no->subd) break;
      no = no->subd;
  }
  return no;
}}

int remover(arvore **p, int valor) {
  arvore *no_retorno = verificaValor((*p), valor);

  if(!no_retorno) return -1;
    printf("%d - valor do no\n",no_retorno->elemento );
    printf("%d - endereco do no\n",&no_retorno);
    printf("%d - endereco esquerdo\n",&(no_retorno->sube));
    printf("%d - endereco direito\n",&(no_retorno->subd));


    int retorno = no_retorno->elemento;
    if(no_retorno->subd){
      arvore *no_maior = encontra_maior(no_retorno->subd,1);
      remover(p, no_maior->elemento);
      no_maior->subd = no_retorno->subd;
      no_maior->sube = no_retorno->sube;
      *no_retorno = *no_maior;
    }else if(no_retorno->sube){
      arvore *no_maior = encontra_maior(no_retorno->sube,-1);

      remover(p, no_maior->elemento);

      no_maior->subd = no_retorno->subd;
      no_maior->sube = no_retorno->sube;
      *no_retorno = *no_maior;
  }
  //else free(no_retorno);
  return retorno;
}

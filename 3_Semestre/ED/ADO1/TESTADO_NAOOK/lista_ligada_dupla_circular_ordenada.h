#include <stdio.h>
#include <stdlib.h>

typedef struct n {
  int valor;
  struct n *next;
  struct n *prev;
} no;

void insere(no* node, int val)
{
	no *inicial = node, *novo, *anterior = NULL;
	novo = (no*)malloc(sizeof(no));

	novo->valor = val;
	novo->next = node;
  novo->prev = NULL;

	while(node == inicial && node->valor < val){
		anterior = node;
		node = node->next;
	}

	if(inicial->next == NULL){
		inicial->next = novo;
	}else{
		anterior->next = novo;
    novo->prev = anterior;

    if (node == inicial){
      novo->next = node;
      node->prev = novo;
    }
	}
	return;
}


int remover(no *node, int val){
  no *anterior, *inicial = node;
  while(node->next){
    if (node->valor == val){
      anterior->next = node->next;
      node->next->prev = anterior;
      return 1;
    }
    anterior = node;
    node = node->next;
    if(inicial == node->next) break;
  }
  return -1;
}


int remove_todos(no *node, int val){
  no *anterior, *inicial = node;
  while(node){
    if (node->valor == val){
      anterior->next = node->next;
      if (node->next) node->next->prev = anterior;
    }else anterior = node;
    node = node->next;
    if(inicial == node->next) break;
    printf("aqui\n" );
  }
  return -1;
}

int busca(no *node, int val){
  int i=0;
  no *inicial = node;
  while(node){
    i++;
    if (node->valor == val){
      return i-1;
    }
    node = node->next;
    if(inicial == node->next) break;
  }
  return -1;
}

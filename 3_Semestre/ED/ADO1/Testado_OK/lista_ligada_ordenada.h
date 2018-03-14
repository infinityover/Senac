#include <stdio.h>
#include <stdlib.h>

typedef struct n {
  int valor;
  struct n *next;
} no;



void insere(no* node, int val)
{
	no *inicial = node, *novo, *anterior = NULL;
	novo = (no*)malloc(sizeof(no));

	novo->valor = val;
	novo->next = NULL;

	while(node != NULL && node->valor < val){
		anterior = node;
		node = node->next;
	}

	if(inicial->next == NULL){
		inicial->next = novo;
	}else{
		anterior->next = novo;

    if (node != NULL){
      novo->next = node;
    }
	}
	return;
}

int remover(no *node, int val){
  no *anterior;
  while(node->next){
    if (node->valor == val){
      anterior->next = node->next;
      return 1;
    }
    anterior = node;
    node = node->next;
  }
  return -1;
}


int remove_todos(no *node, int val){
  no *anterior;
  while(node){
    if (node->valor == val){
      anterior->next = node->next;
    }else anterior = node;
    node = node->next;
  }
  return -1;
}

int busca(no *node, int val){
  int i=0;
  while(node){
    i++;
    if (node->valor == val){
      return i-1;
    }
    node = node->next;
  }
  return -1;
}
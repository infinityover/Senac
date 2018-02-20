#include <stdio.h>
#include <stdlib.h>

typedef struct n{
  int x;
  int y;
  struct n *next;
  struct n *previous;
} list_element;


void CriaLista(list_element *list){
  list-> x = 0;
  list-> y = 0;
  list-> next = NULL;
  list-> previous = NULL;
}

int ListaDVazia(list_element *list) {
  if (list -> next == NULL){
    return 1;
  }
  return 0;
}

void inserirElemento(list_element *list, int y, int x){;
  list_element *novo_no;
  novo_no = (list_element*)malloc(sizeof(list_element));
  novo_no -> x = x;
  novo_no -> y = y;
  novo_no -> next = NULL;
  novo_no -> previous = list;
  //list_element *fon = (list -> next);

  while(list->next){
    list = list -> next;
  }
  list ->next = novo_no;
}

void removerElemento(list_element *list, int y, int x){
  while(1){
    if (list -> y == y && list -> x == x){
      list_element *prox =  list ->next;
      list_element *ant =  list ->previous;
      if(!prox){
        prox = NULL;
      }
      if(!ant){
        ant = NULL;
      }

      list -> previous -> next = prox;
      list -> next -> previous = ant;
      break;
    }
    if (list -> next){
      list = list -> next;
    }else
    break;
  }
}

void imprimeLista(list_element *list){
  int i = 0;
  while(1){
    printf("posicao %d x=%d y=%d \n",i, list -> x,list ->y);
    i++;
    if (list -> next){
      list = list -> next;
    }else
    break;
  }
}

int testaObjeto(list_element *list){
  int x = list -> x;
  int y = list -> y;
  int nos = 0,repetidos = 0, linha = 0, coluna = 0;

  while(list -> next){
    if (list -> y == y && list -> x == x){
      repetidos++;
    }

    if(list -> y == y){
      linha++;
    }

    if(list -> x == x){
      coluna++;
    }

    nos++;
    list = list -> next;
  }

  if (repetidos == nos || coluna == nos || linha == nos){
    printf("Este objeto possui %d pontos, porem não formam uma figura\n",nos);
  }

  if(nos == 3){

  }

}

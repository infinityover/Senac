#include "lista_dupla_ordenada.h"

void imprime(no *lista){
  while(lista->next){
    lista = lista->next;
    printf("%d\n", lista->valor );
  }
}

void imprimeinv(no *lista){
  while(lista->next){
    lista = lista->next;
  }

  while(lista){
    printf("%d\n", lista->valor );
    //printf("%d\n", lista->prev->valor);
    lista = lista->prev;
  }

}

int main(int argc, char const *argv[]) {
  no *lista;
  lista =(no *)malloc(sizeof(no));
  lista -> valor = 0;
  lista -> next = NULL;
  lista -> prev = NULL;

  insere(lista,10);
  insere(lista,20);
  insere(lista,30);
  insere(lista,40);
  insere(lista,50);
  insere(lista,60);
  insere(lista,10);

  remove_todos(lista,10);
  imprimeinv(lista);

  //imprimeinv(lista);

  return 0;
}

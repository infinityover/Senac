#include "lista_ligada_nao_ordenada.h"

void imprime(no *lista){
  while(lista->next){
    lista = lista->next;
    printf("%d\n", lista->valor );
  }
}

int main(int argc, char const *argv[]) {
  no *lista;
  lista =(no *)malloc(sizeof(no));
  lista -> valor = 0;
  lista -> next = NULL;

  insere(lista,10);
  insere(lista,20);
  insere(lista,30);
  insere(lista,40);
  insere(lista,50);
  insere(lista,60);
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  remove_todos(lista,70);



  //printf("%d\n",busca(lista,70));

  //printf("%d\n",busca(lista,7));

  return 0;
}
#include "lista_ligada_circular_ordenada.h"

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

void imprime(no *lista){
  no *inicial= lista;

  while(lista->next){
    lista = lista->next;
    if(inicial == lista) break;
    printf("%d\n", lista->valor );
  }
}

int main(int argc, char const *argv[]) {
  no *lista;
  lista =(no *)malloc(sizeof(no));
  lista -> valor = 0;
  lista -> next = NULL;

  printf("saiu\n" );
  insere(lista,10);
  printf("saiu\n" );
  insere(lista,20);
  printf("saiu\n" );
  insere(lista,30);
  insere(lista,40);
  insere(lista,60);
  insere(lista,50);
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  printf("saiu\n" );
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  remove_todos(lista,70);
  imprimeinv(lista);


  //printf("%d\n",busca(lista,70));

  //printf("%d\n",busca(lista,7));

  return 0;
}

#include "lista_ligada_dupla_circular_nao_ordenada.h"

void imprime(no *lista){
  no *inicial= lista;

  while(lista->next){
    lista = lista->next;
    if(inicial == lista) break;
    printf("%d\n", lista->valor );
  }
}
void imprimeinv(no *lista){
  no *inicial = lista;
  while(lista->next){
    lista = lista->next;
    if(lista == inicial)break;
  }

  while(lista){
    printf("%d\n", lista->valor );
    //printf("%d\n", lista->prev->valor);
    lista = lista->prev;
    if(lista == inicial)break;
  }

}

int main(int argc, char const *argv[]) {
  no *lista;
  lista =(no *)malloc(sizeof(no));
  lista -> valor = 0;
  lista -> next = NULL;

  insere(lista,20);
  insere(lista,10);
  insere(lista,30);
  insere(lista,40);
  insere(lista,60);
  insere(lista,50);
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  insere(lista,70);
  remove_todos(lista,70);
  imprimeinv(lista);


  //printf("%d\n",busca(lista,70));

  //printf("%d\n",busca(lista,7));

  return 0;
}

#include "lista_dupla.H"

void main() {
  list_element *lista;
  CriaLista(&lista);
  inserirElemento(&lista,1,2);
  inserirElemento(&lista, 3,3);
  inserirElemento(&lista, 4,4);
  imprimeLista(&lista);
  removerElemento(&lista,3,3);
  printf("\n" );
  imprimeLista(&lista);
  printf("terminou a exec\n");
  return;
}

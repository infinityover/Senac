/*
Pergunta conceitual: nesse HEAP de maior prioridade, como seria um algoritmo para buscar o elemento de menor prioridade?
Retorna o ultimo elemento da fila

Resp: Deve retornar o item mais a direita da arvore, ou seja
retorna_menor{
  if(fila*2>ultimo)
    retorna i
  else{
    fila++
    fila*2
    retorna_menor
  }
}

*/
#include <stdio.h>
#include <stdlib.h>

int ultimo=0;
void insere(int fila[],int ult, int prio){
  //adiciona um no total da fila
  ult++;
  //posição de inserção
  int k = ult;
  //enquanto houver resto da divisão de k/2 e k/2 tiver valor
  while(k/2 !=0 && fila[k/2]){
    printf("k - %d\n",k );
    fila[k] = fila[k/2];
    k = (int)k/2;
  }
  fila[k] = prio;
  ultimo++;
  printf("k - %d\n",k );
  printf("Saiu\n" );
}

int remover(int fila[], int ult){
  int y = fila[1];
  int x = fila[ult+1];
  int k = 1;
  while(k*2<=ult && (x < fila[2*k] || x <fila[k*2+1])){
    if(fila[k*2]>fila[2*k+1]){
      fila[k] = fila[k*2];
      k = k*2;
    }else{
      fila[k] = fila[k*2+1];
      k = k*2 + 1;
    }
  }
  fila[k] = x;
  ultimo--;
  return y;
}

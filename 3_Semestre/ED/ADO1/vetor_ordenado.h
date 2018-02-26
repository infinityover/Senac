#include <stdio.h>
#include <stdlib.h>

int ultimo_inserido = 0;
int busca (int v[], int x, int n ) {
   int e, m, d;                              // 1
   e = 0; d = n-1;                           // 2
   while (e <= d) {                          // 3
      m = (e + d)/2;                         // 4
      if (v[m] == x) return m;               // 5
      if (v[m] < x) e = m + 1;               // 6
      else d = m - 1;                        // 7
   }                                         // 8
   return -1;                                // 9
}

//int busca(int vet[], int k, int ini, int fim){
//  int meio = fim/2;
//  if (ini == fim || ini == meio/2){
//    printf(" ini %d meio %d fim %d\n",ini,meio,fim );
//    return -1;
//  }
//  if(vet[ini] == k){
//    return ini;
//  }
//  if(vet[meio] == k){
//    return meio;
//  }
//  if(vet[fim]==k) return fim;
//  if (vet[meio] < k){
//    return busca(vet, k, ini, meio +1);
//  }else{
//      return busca(vet, k, meio-1, fim);
//  }
//  return -1;
//}

int insere(int vet[], int valor){
  int i =0, at;
  if(ultimo_inserido == 50) return -1;
  for(i; i< 50; i++){
    if(valor <= vet[i]){
      break;
    }
  }

  for(int j = 50; j > i; j--){
    vet[j] = vet[j-1];
  }
  vet[i] = valor;
  ultimo_inserido++;
  return 0;
}

int remover(int vet[], int valor){
  int i = busca(vet, valor, ultimo_inserido);
  if(i < 0) return -1;

  for(i; i< ultimo_inserido; i++){
    vet[i] = vet[i+1];
  }
  ultimo_inserido--;
  return 1;
}

int remover_todos(int vet[], int valor){
  while(1){
    int i =  busca(vet, valor, ultimo_inserido);
    if(i>0) remover(vet, valor);
    else break;
  }
  return 0;
}

int lerpos(int vet[], int valor){
  if(valor > ultimo_inserido) return -1;
  return vet[valor];
}

/*- busca em vetor (ordenado e n�o ordenado)
- Inser��o em vetor (ordenado e n�o ordenado)
- Remo��o em vetor (ordenado e n�o ordenado)
- Remover todos os elementos de valor X em um vetor(ordenado e n�o ordenado)
- Ler valor em posi��o espec�fica do vetor
*/

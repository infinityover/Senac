#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <ctype.h>

int main()
{     
      //typedef struct sorteio {
      //      int concurso;
      //      int resultado_1;
      //      int resultado_2;
      //      int resultado_3;
      //      int resultado_4;
      //      int resultado_5;
      //      int resultado_6;
      //} sorteio;

      char linha[200];
      char *linha_saida=NULL;
      //size_t len = 0;
      FILE * input;
      //FILE * Output;

      //sorteio matriz_resultado[2000];
      int matriz_resultado[2000][6];
      int contador_tab = 0, contador_linha =0;
      int concurso = 0, i =0;

      input = fopen("resultado.txt", "r"); //fopen(nome_arquivo, funcao(a-append, r-read, w-write))
      if (!input){
            printf("Erro ao abrir arquivo");
            exit(1);
      }
      while(fgets(linha,sizeof(linha), input) != NULL){
            

            if (sizeof(linha) > 100 && isdigit(atoi(&linha[0]))) {
                  //printf("%s\n",linha);
                        concurso = atoi(&linha[0]);
                        printf("Linha %d\n", concurso);
                        if (concurso < 10){
                            matriz_resultado[i][0] = atoi(&linha[15]);
                            matriz_resultado[i][1] = atoi(&linha[19]);
                            matriz_resultado[i][2] = atoi(&linha[23]);
                            matriz_resultado[i][3] = atoi(&linha[27]);
                            matriz_resultado[i][4] = atoi(&linha[31]);
                            matriz_resultado[i][5] = atoi(&linha[35]);
                        }
                        if (concurso >= 10 && concurso < 100){
                            matriz_resultado[i][0] = atoi(&linha[16]);
                            matriz_resultado[i][1] = atoi(&linha[20]);
                            matriz_resultado[i][2] = atoi(&linha[24]);
                            matriz_resultado[i][3] = atoi(&linha[28]);
                            matriz_resultado[i][4] = atoi(&linha[32]);
                            matriz_resultado[i][5] = atoi(&linha[36]);
                        }
                        if (concurso >= 100 && concurso < 1000){
                            matriz_resultado[i][0] = atoi(&linha[17]);
                            matriz_resultado[i][1] = atoi(&linha[21]);
                            matriz_resultado[i][2] = atoi(&linha[25]);
                            matriz_resultado[i][3] = atoi(&linha[29]);
                            matriz_resultado[i][4] = atoi(&linha[33]);
                            matriz_resultado[i][5] = atoi(&linha[37]);
                        }
                          if (concurso >= 1000){
                            matriz_resultado[i][0] = atoi(&linha[18]);
                            matriz_resultado[i][1] = atoi(&linha[22]);
                            matriz_resultado[i][2] = atoi(&linha[26]);
                            matriz_resultado[i][3] = atoi(&linha[30]);
                            matriz_resultado[i][4] = atoi(&linha[34]);
                            matriz_resultado[i][5] = atoi(&linha[38]);
                        }
                  i++;
                  printf("%d %d %d %d %d %d\n",matriz_resultado[i][0],matriz_resultado[i][2],matriz_resultado[i][3],matriz_resultado[i][4],matriz_resultado[i][5],matriz_resultado[i][6]);
            }
      }
}
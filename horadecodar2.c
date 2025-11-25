#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

// ISSO AQUI É UMA MATRIZ IDENTIDADE 5X5
// #define é usado para definir constantes
// substitui todas as ocorrências de LINHAS e COLUNAS por 5 no código
// sem elas precisariamos fazer várias alterações se quisermos mudar o tamanho da matriz

int main(){

    int matriz [LINHAS][COLUNAS];

    int soma = 0;

    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){

            soma++;
            matriz[i][j] = soma;
            printf ("%d ", matriz[i][j]);
        
            }
        printf ("\n");
        }
  return 0;
    }









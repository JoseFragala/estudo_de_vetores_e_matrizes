#include <stdio.h>

int main(){

//matrizes são arrays multidimensionais
//são usadas para armazenar dados em uma estrutura de tabela
//declaração de uma matriz
    //tipo nome[linhas][colunas]; int matriz[3][4];

int matriz[3][3];
matriz[0][0] = 1; //inicialização dos elementos
matriz[0][1] = 2;
matriz[0][2] = 3;
matriz[1][0] = 4;
matriz[1][1] = 5;
matriz[1][2] = 6;
matriz[2][0] = 7;
matriz[2][1] = 8;
matriz[2][2] = 9;

//Acesso aos elementos da matriz
    //Acesso via índices
    //matriz[linha][coluna]
    //Exemplo de uso de matrizes
    printf("O elemento na postição [0] [0] é %d\n", matriz[0][0]);
     //acesso ao elemento na 1ª linha e 1ª coluna
    printf("O elemento na postição [1] [1] é %d\n", matriz[1][1]); 
    //acesso ao elemento na 2ª linha e 2ª coluna

    return 0;
}
// essa forma não é muito prática para matrizes grandes 
// normalmente usamos estruturas de repetição para manipular matrizes
// Aplicações comuns de matrizes
    //Representação de tabelas de dados
    //Imagens digitais (pixels)
    //Grafos e redes
    //Simulações científicas e modelagem matemática
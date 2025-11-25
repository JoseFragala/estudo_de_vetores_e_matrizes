#include <stdio.h>

/*arrays são estruturas de dados que
 armazenam uma coleção de elementos do mesmo tipo */

 //definição de um array
    //tipo nome[tamanho]; int numeros[5];

 //inicialização de um array
    //int numeros[5] = {10, 20, 30, 40, 50};
//indices são de 0 a 4 
    //int numeros[5] = {0}; //inicializa todos os elementos com 0
    //int numeros[] = {10, 20, 30, 40, 50};
     //tamanho é definido automaticamente
//Acesso aos elementos do array
    //Acesso via índice
    //numeros[0]
    //numeros[1] = 25; //modifica o segundo elemento
    //numeros[4] = numeros[2] + 5; //modifica o quinto elemento

//Exemplo de uso de arrays
//printf("Elemento na posição 3: %d\n", numeros[2]);

//Aplicações comuns de arrays
    //Armazenamento de listas de valores
    //Manipulação de coleções de dados
    //Implementação de algoritmos que requerem acesso sequencial aos dados
     

// primeiro exemplo de array em C - armazenar notas de alunos (array de float)

int main(){

    float notas[3] = {85.5, 90.0, 78.3}; //declaração do array
    
    printf("Nota do aluno 1 é: %.1f\n", notas[0]); //acesso ao primeiro elemento
    printf("Nota do aluno 2 é: %.1f\n", notas[1]); //acesso ao segundo elemento
    printf("Nota do aluno 3 é: %.1f\n", notas[2]); //acesso ao terceiro elemento

 

// Exemplo 2 - armazenamento de caracteres (array de char)


    char letras[4] = {'A', 'B', 'C', 'D',}; //declaração do array

    printf("Primeira letra: %c\n", letras[0]); //acesso ao primeiro elemento
    printf("Segunda letra: %c\n", letras[1]); //acesso ao segundo elemento
    printf("Terceira letra: %c\n", letras[2]); //acesso ao terceiro elemento
    printf("Quarta letra: %c\n", letras[3]); //acesso ao quarto elemento
   
    return 0;
}


//calcular a soma dos elementos do vetor

#include <stdio.h>

int main(){
    int vetor[5];
    int soma = 0;

    for (int i = 0; i < 5; i++){
        soma += vetor[i]; // soma dos elementos do vetor

    }
    printf ("A soma dos elementos do vetor é: %d\n", soma);
    return 0;
}
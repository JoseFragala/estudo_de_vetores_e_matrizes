#include <stdio.h>

int main(){

    int vetor[5]; // declarei um vetor com 5 inteiros

    for (int  i = 0; i < 5; i++) {
        vetor [i] = i * 2; // logica para mostrar valores pares
// printf ("vetor[%d] = %d\n", i, vetor[i]); 
// poderia colocar esse printf aqui
    }
    // Exibindo Vetor usando o loop 'for'
    // esse for é usado para codigo de iniciantes 
    // para mostrar o conteudo do vetor
    // programadores mais experientes usam outros metodos
    // para exibir o conteudo do vetor
   for (int i = 0; i < 5; i++){
        printf ("vetor[%d] = %d\n", i, vetor[i]);
   }
   return 0;
}
// poderia colocar esse printf dentro do primeiro for
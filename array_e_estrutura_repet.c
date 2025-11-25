// Array de strings com estrutura de repetição em C
#include <stdio.h>


int main(){
char *nomes[] = {"Alice", "Bob", "Carol"};

for (int i = 0; i < 3; i++){ //estrutura de repetição para percorrer o array
    printf ("%s\n", nomes[i]); //está chamando cada elemento do array
    //%s é o especificador de formato para strings em C
    //não foi usado %c porque %c é para caracteres individuais
    // o '*' antes de nomes indica que é um array de ponteiros para char (strings)
    /* array de ponteiros significa que cada elemento do array é 
    um ponteiro que aponta para o primeiro caractere de uma string*/

    
}

return 0;
}
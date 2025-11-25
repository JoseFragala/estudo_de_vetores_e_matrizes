#include <stdio.h>

// inicialização simplificada de matrizes em C
/*
int matriz [3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
*/
/* ou
int matriz [3][3] = {
    1, 2, 3,
    4, 5, 6,
    7, 8, 9
};
*/

int main (){

    int matriz [3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //Acesso aos elementos da matriz
    printf("Elemento na posição [0][0]: %d\n", matriz[0][0]);
    printf("Elemento na posição [1][2]: %d\n", matriz[1][2]);
    printf("Elemento na posição [2][1]: %d\n", matriz[2][1]);

    return 0;

}

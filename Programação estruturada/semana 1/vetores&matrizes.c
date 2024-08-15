#include <stdio.h>

#define TAM 5



int main(){

    int array[TAM];

    int *px = &array[0]; //px recebe o endereço de memória da posição 0 do array

    *px = 3; //atribuindo ao ponteiro px o valor "3"

    for (int i = 0; i < TAM; i++){
        array[i] = i * 14 / 3;
    }

    printf("Elementos no array\n");

    for (size_t i = 0; i < TAM; i++){
        printf("%i\n", array[i]);
    }

    printf("\n\n\n");

    //MATRIZES


    int matriz[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matriz[i][j] = 1 + i * j * 10;
        }
    }


    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%i, ", matriz[i][j]);
        }
        printf("\n");
    }
     



}

#include <stdio.h>
#define TAM 5

void consultaArray(int array[]){
    for (int i = 0; i < TAM; i++){
        printf("%i", array[i]);
    }   
}

int modificaArray(int *array[]){
    int posicao;
    int numero;
    printf("escolha a posicao do array que deseja modificar\n");
    scanf("%i", &posicao);
    printf("escolha o numero que deseja inserir\n");
    scanf("%i", &numero);
    array[posicao] = numero;
    return array;
}

int main(){
    int opcao;
    int array[TAM] = {0, 1, 2, 3, 4};

    printf("escolha sua opcao. 1 - consultar array\n");

    scanf("%i", &opcao);

    switch (opcao){
    case 1:
        consultaArray(array);
        break;
    case 2:
        modificaArray(array);
        consultaArray(array);
        break;
    default:
        break;
    }

}
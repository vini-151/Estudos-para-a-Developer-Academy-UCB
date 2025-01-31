#include <stdio.h>

// Bubble Sort
// Possui esse nome pq os elementos maiores vão "subindo o array" como se fossem bolhas 
// Complexidade do bubble sort é de O(n²)
// fonte de estudo: https://www.geeksforgeeks.org/bubble-sort-algorithm/

//Implementação:

void swap(int *a, int *b){
    //nessa função há a troca de elementos. Simples assim.

    int temporario = *a;
    *a = *b;
    *b = temporario;
}

void bubbleSort(int arr[], int qtdElementos){
    int troca; //0 - não trocou / 1 - trocou
    for (int i = 0; i < qtdElementos - 1; i++){
        troca = 0;
        for(int j = 0; j < qtdElementos - i ; j++){
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
                troca = 1;
            }
        }

        if (troca == 0){
            break;
        }

    }
    
}

void imprimeValor(int array[], int qtdElementos){
    for (int i = 0; i < qtdElementos; i++){
        printf("%i ", array[i]);
    }
    printf("\n");
}

int main(){

    int array[] = {8, 4, 0, 2, 5, 7};

    int tamanho = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, tamanho - 1); //passa o array a ser ordenado, o piso e o teto do array

    imprimeValor(array, tamanho); 

    return 0;

}
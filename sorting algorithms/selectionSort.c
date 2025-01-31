#include <stdio.h>


//Selection sort
//Complexity of O(n²) -> por possuir dois "nested loops" (for dentro de for nesse caso) O(n *n) = O(n²)

void imprimeValor(int array[], int qtdElementos){
    for (int i = 0; i < qtdElementos; i++){
        printf("%i ", array[i]);
    }
    printf("\n");
}

void selectionSort(int array[], int qtdElementos){

    for (int i = 0; i < qtdElementos - 1; i++){
        
        //pressupõe que o valor mínimo do array pertence a posição atual
        int indiceDoMenor = i;

        for (int j = i + 1; j < qtdElementos; j++){ 
            
            if (array[j] < array[indiceDoMenor]){
                //se entrar aqui, foi encontrado um valor menor que o valor que está no indiceDoMenor
                indiceDoMenor = j;
            }
            
        }

        int temp = array[i];
        array[i] = array[indiceDoMenor];
        array[indiceDoMenor] = temp;

    }
    
}

int main(){

    int array[] = {7, 4, 6, 8, 3, 9};
    int n = sizeof(array) / sizeof(array[0]);

    imprimeValor(array, n);

    selectionSort(array, n);

    imprimeValor(array, n);

    
}

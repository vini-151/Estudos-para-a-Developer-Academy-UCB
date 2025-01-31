#include <stdio.h>

//Quick sort
// Princípio do "dividir para conquistar" -> dividir um problema em sub-problemas, resolvê-los individualmente e depois dar um merge 
//seleciona um pivô e particiona o array de acordo com a posição do pivô (há vários métodos de escolha, os três principais [Naive, Lomuto e Horae] possuem complexidade de big O linear O(n).)
//ou seja
// primeiro escolhe um pivô
//segundo particiona o array
//terceiro chama a função recursivamente 
//por último, para a recursão quando só resta um elemento no "sub-array" pois já terá ordenado tudo

//Complexidade no quicksort é meio complicado de se definir, já que o método de escolha do pivô influencia na complexidade do algorítimo, então há três casos:
// melhor caso que é Ω(n log n) que acontece quando o array é pivotado bem na meiota e divide o array em dois arrays de tamanho igual.
// caso mediano que é θ(n log n) que acontece quando o array é pivotado bem na meiota e divide o array em dois arrays de tamanho *diferente*.
// pior caso que é O(n²) que ocorre quando o menor ou maior elemento são escolhidos como pivô

//fonte de estudo: https://www.geeksforgeeks.org/quick-sort-algorithm/?ref=shm


//funções:

void swap(int *a, int *b); //troca dois números

int partition(int array[], int low, int high); //particiona o array (low e high referem ao primeiro índice e o último índice respectivamente)

void quickSort(int arr[], int low, int high); //a função de quickSort em si

void imprimeValor(int array[], int qtdElementos){
    for (int i = 0; i < qtdElementos; i++){
        printf("%i ", array[i]);
    }
    printf("\n");
}

int main(){

    int array[] = {8, 4, 0, 2, 5, 7};

    int tamanho = sizeof(array) / sizeof(array[0]);

    quickSort(array, 0, tamanho - 1); //passa o array a ser ordenado, o piso e o teto do array

    imprimeValor(array, tamanho); 

    return 0;

}

void swap(int *a, int *b){
    //nessa função há a troca de elementos. Simples assim.

    int temporario = *a;
    *a = *b;
    *b = temporario;
}

int partition(int array[], int low, int high){
    //Nessa função, selecionaremos o pivot

    int pivot = array[high];

    //declararemos o índice do menor elemento, indicando a posição à esquerda do pivot encontrado até agr

    int i = low - 1;

    //Atravessaremos o array de low a high e move todos os menores elementos para a esquerda. Elementos de Low até I são menores a cada iteração
    for (int j = low; j < high; j++){
        if (array[j] < pivot){ //se é menor que o pivot, vai pra esquerda
            i++;
            swap(&array[i], &array[j]);
        }
    }
    
    //move o pivô depois dos menores elementos e retorna a sua posição
    swap(&array[i + 1], & array[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high){
    //essa função é a implementação do quickSorte em si

    if (low < high){
        
        int posicaoPivo = partition(arr, low, high); //essa variável refere-se à posição do pivo que a função partition retorna

        //por que precisamos saber a posição do pivô mesmo?

        //para as funções recursivas para os elementos menores e elementos maiores ou iguais;
        quickSort(arr, low, posicaoPivo - 1);   //passa o array a ser ordenado, o piso e o teto da comparação
        quickSort(arr, posicaoPivo + 1, high);  //passa o array a ser ordenado, o piso e o teto da comparação

    }
    


}

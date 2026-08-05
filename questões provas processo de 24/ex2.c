#include <stdio.h>

void troca(int *a, int b){

    int temp = *a;
    *a = b;
    temp = *a;

}

int main(){

    int a = 10, b = 20;

    troca(&a, b);

    printf("valor 1: %d. Valor 2: %d", a, b);

    //qual será a saída?

}

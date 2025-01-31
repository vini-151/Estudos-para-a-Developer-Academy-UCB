#include <stdio.h>

int main(){

   int vetor[] = {1789, 1947, 2007};

    int *p = vetor;

    p++;

    printf("valor 1:%d\n", *p);

    (*p)++;

    printf("Valor 2: %d", *p);

    //qual será a saída?

    

}
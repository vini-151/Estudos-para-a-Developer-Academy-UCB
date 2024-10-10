#include <stdio.h>

int main(){

    int numero = 15;
    int resultado = 0;

    if (numero % 3 == 0 && numero % 5 == 0){
        resultado = numero * 2;
    } else if(numero % 3 == 0 || numero % 5 == 0){
        resultado = numero + 10;
    }
    
    printf("%i", resultado);

}
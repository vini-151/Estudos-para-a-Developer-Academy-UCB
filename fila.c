#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int dado;
    struct Node *prox;
}Node;

typedef struct Queue{
    Node *Inicio;
    Node *Fim;
}Queue;

Queue initFila(Queue *fila){
    fila->Inicio = NULL;
    fila->Fim = NULL;    
}

Node* novoNo(int valor){
    Node *no = (Node*) malloc(sizeof(Node));

    if (no == NULL){
        printf("Erro nao foi possivel alocar espaco para node.\n");
        exit(1);
    }

    no->dado = valor;
    no->prox = NULL;

    return no;
    
}


void enqueue(Queue *fila, int valor){
    Node *no = novoNo(valor);

    //lógica da fila FIFO

    if (fila->Fim == NULL){
        fila->Inicio = no;
        fila->Fim = no;
    }else{

        fila->Fim->prox = no;
        fila->Fim = no;

    }
    
}

void dequeue(Queue *fila){
    if (fila->Inicio == NULL){
        printf("Fila vazia, nada para ser retirado.\n");
        exit(1);
    }

    Node *temp = fila->Inicio;

    fila->Inicio = fila->Inicio->prox;

    if (fila->Inicio == NULL) fila->Fim = NULL;

    free(temp);
       
    
}

void mostraValor(Queue *fila){

    if (fila->Inicio == NULL){
        printf("Fila vazia.\n");
        exit(1);
    }
    

    Node *index = fila->Inicio;
    while (index != NULL){
        printf("%i\n", index->dado);
        index = index->prox;
    }
    
}


int main (){

    Queue minhaFila;

    initFila(&minhaFila);

    enqueue(&minhaFila, 13);


    mostraValor(&minhaFila);

}
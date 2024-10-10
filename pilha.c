#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int dado;
    struct Node *prox; //item em cima
}Node;

typedef struct Stack{
    Node *Top;
    Node *Bottom;
}Stack;

void initPilha(Stack *pilha){ //pilha iniciará vazia
    pilha->Bottom = NULL;  
    pilha->Top = NULL;
}

Node* novoNo(int valor){
    Node *no = (Node*) malloc(sizeof(Node));

    if (no == NULL){
        printf("Erro nao foi possivel alocar espaco para node.\n");
        exit(1);
    }

    //atribuindo o valor e dizendo que o próximo é nulo (não há nada em cima)

    no->dado = valor;
    no->prox = NULL;

    return no;
    
}


void push(Stack *pilha, int valor){
    Node *no = novoNo(valor);

    //lógica da fila LIFO

    if (pilha->Bottom == NULL){
        pilha->Bottom = no;
        pilha->Top = no;
    }else{
        no->prox = pilha->Top;  //coloca o item ao topo
        pilha->Top = no;        //atualiza quem é o topo agora
    }
        
}

void pop(Stack *pilha){
    if (pilha->Top == NULL){
        printf("Pilha vazia vazia.\n");
        exit(1);
    }

    Node *temp = pilha->Top;

    pilha->Top = pilha->Top->prox;

    if (pilha->Top == NULL){
        pilha->Bottom = NULL;
    }

    free(temp);
    
    
}


void mostraValor(Stack *pilha){

    if (pilha->Top == NULL){
        printf("Pilha vazia vazia.\n");
        exit(1);
    }
    

    Node *index = pilha->Top;
    while (index != NULL){
        printf("%i\n", index->dado);
        index = index->prox;
    }
    
}


int main (){

    Stack minhaPilha;

    initPilha(&minhaPilha);

    push(&minhaPilha, 10);

    push(&minhaPilha, 15);
    
    push(&minhaPilha, 20);
    
    push(&minhaPilha, 25);

    mostraValor(&minhaPilha);

    printf("\n\n");

    pop(&minhaPilha);

    pop(&minhaPilha);

    mostraValor(&minhaPilha);

}
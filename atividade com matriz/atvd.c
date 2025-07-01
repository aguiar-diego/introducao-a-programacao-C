// Diego Aguiar Garcia 15574221

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void insere_celula(int x, node*no);
void printa(node*no);
node* matriz_ponteiro(int matriz[5][5]);


int main(){
    node*root = NULL;
    int valor = 1;
    int matriz[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            matriz[i][j] = valor;
            valor++;
        }
    }
    
    root = matriz_ponteiro(matriz);

    printa(root);
    return 0;
}

void insere_celula(int x, node*no){
    while(no->next !=NULL){
        no = no->next;
    }
    node*new_node = malloc(sizeof(node));
    no->next = new_node;
    no->next->next = NULL;
    no->next->data = x;
}

void printa(node*no){
    printf("%d -> ", no->data);
    while(no->next != NULL){
        no = no->next;
        printf("%d -> ", no->data);
    }
    printf("<<NULL>>");
}

node* matriz_ponteiro(int matriz[5][5]){
    
    node * root = NULL;
    node * new_node = malloc(sizeof(node));
    new_node->next = NULL;
    new_node->data = matriz[0][0];
    root = new_node;
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0 && j==0){
                j++;
            }
            insere_celula(matriz[i][j],root);
        }
    }
    return root;
}


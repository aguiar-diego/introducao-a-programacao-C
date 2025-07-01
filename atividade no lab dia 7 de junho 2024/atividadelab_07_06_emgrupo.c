/*Exercicio 07_06*/
/*GRUPO: Arthur Betti - NUSP 155***** && Diego Aguiar NUSP 155******/

/*Criar uma lista ligada simples e em cada no deve ter um inteiro e um ponteiro para o proximo no*/

#include <stdio.h>
#include <stdlib.h>

struct no {
	int numero;
	struct no *prox;
};

typedef struct no NO;

//Rotina que insere um no no inicio da lista
void insereInicio(NO *head, int num){
	NO* novoNo = (NO*)malloc(sizeof(NO));
	
	novoNo->numero = num; //Tinha esquecido de atribuir o numero ao conteudo
	novoNo->prox = head->prox;
	head->prox = novoNo;
}

//Rotina para excluir elemento no inicio da lista
void excluiInicio(NO *head){
	NO* aux = head->prox;
	head->prox = aux->prox;
	free(aux);	
}

//Rotina para inserir no final da lista
void insereFim(NO *head, int num){
	NO* novoNo = (NO*)malloc(sizeof(NO));
	
	NO* aux = head->prox;
	//Deve percorrer todos os no da lista ate o ultimo
	while(aux->prox!=NULL){
		aux = aux->prox;
	}
	
	//Chegamos ao ultimo elemento da lista
	novoNo->numero = num;
	novoNo->prox = NULL; //Sera o ultimo elemento da lista, logo deve apontar para NULL
	aux->prox = novoNo;
}

//Rotina para excluir elemento no final da lista
void excluiFim(NO *head){
	/*Quando chegar no final da lista, so terei o endereco do ultimo no cujo ponteiro proximo no eh NULL
	Mas antes de remove-lo, preciso mudar o ponteiro prox do no anterior para NULL
	Para resolver esse problema, a solucao que encontrei foi andar com dois nos, um na frente e um armazenando a
	posicao do anterior*/
	
	NO* auxAnterior = head;
	NO* auxSeguinte = head->prox;
	
	while(auxSeguinte->prox!=NULL){
		auxAnterior = auxAnterior->prox;
		auxSeguinte = auxSeguinte->prox;
	}
	
	auxAnterior->prox = NULL;
	free(auxSeguinte);	
}

//Rotina para imprimir nos da lista
void imprimirLista(NO *head){
	NO* aux = head->prox; //Nao tinha colocado o proximo, estava exibindo o zero
						  //Cabeca nao eh um no util
	
	while(aux!=NULL){
		printf("%d ", aux->numero);
		aux = aux->prox;
	}
	printf("\n");
}

//Rotina para buscar valor no NO da lista
int buscaValor(NO* head, int referencia){
	int resultado = 0;
	
	NO* aux = head->prox;
	//Percorre todos os elementos da lista
	while(aux!=NULL){
		//Condicao compara valor
		if(aux->numero == referencia){
			resultado = 1;
			break;
		}	
		aux = aux->prox;
	}
	
	return resultado;
}

//Rotina para ordenar os valores da lista
void ordenaLista(NO* head){
	NO* aux1 = head->prox;
	NO* aux2;
	int temp; //Armazena o numero temporariamente
	
	while(aux1!=NULL){
		aux2 = aux1->prox;
		
		while(aux2!=NULL){
			if(aux1->numero>aux2->numero){
				temp = aux1->numero;
				aux1->numero = aux2->numero;
				aux2->numero = temp;
			}
		
			aux2 = aux2->prox;
		}
		
		aux1 = aux1->prox; //Tinha esquecido do incremento: LOOP infinito!
	}
}

//Insere elemento no meio da lista de modo a mante-la organizada
void insereOrganizadamente(NO* head, int numero){
	printf("A funcao que inseri um elemento no meio da lista de forma a mante-la ordenada pressupoe que a lista esteja ordenada anteriormente.\n");
	
	NO* novoNo = (NO*)malloc(sizeof(NO));
	novoNo->numero = numero;
	NO* aux1 = head->prox;
	NO* aux2 = head;
	
	while(aux1!=NULL && aux1->numero < novoNo->numero){
		aux1 = aux1->prox;
		aux2 = aux2->prox;
	}
	
	novoNo->prox = aux1; //Aponta para o valor de aux1, uma posicao a frente de aux2.
	aux2->prox = novoNo;
}

void excluirValorMeioLista(NO* head, int referencia){
	//Cria dois ponteiros que andam juntos, mas p1 sempre uma posicao a frente de p2
	NO* aux1;
	aux1 = head->prox; //Aux aponta para o primeiro da lista
	NO* aux2;
	aux2 = head;
	
	while(aux1!=NULL){
		if(aux1->numero == referencia){
			aux2->prox = aux1->prox;
			free(aux1); //Limpa ponteiro
			break; //Quebra, so exclui uma vez
		}
		//Incrementa posicoes do ponteiro
		aux1 = aux1->prox;
		aux2 = aux2->prox;
	}
}

int main(){
	//Criar a cabeca da lista
	NO cabeca;
	cabeca.prox = NULL;
	/*Posso fazer desse modo ou entao aloco cabeca dinamicamente como um ponteiro,
	e no insere nao preciso colocar o &*/
	
	printf("Lista ligada inicialmente: ");
	imprimirLista(&cabeca);
	
	printf("Inserindo dinamicamente o valor 1 no inicio da lista: \n");
	insereInicio(&cabeca, 1);
	imprimirLista(&cabeca);
	printf("Inserindo dinamicamente o valor 28 no inicio da lista: \n");
	insereInicio(&cabeca, 28);
	imprimirLista(&cabeca);
	printf("Inserindo dinamicamente o valor 11 no inicio da lista: \n");
	insereInicio(&cabeca, 11);
	imprimirLista(&cabeca);
	printf("Inserindo dinamicamente o valor 49 no inicio da lista: \n");
	insereInicio(&cabeca, 49);
	imprimirLista(&cabeca);
	printf("Inserindo dinamicamente o valor 16 no inicio da lista: \n");
	insereInicio(&cabeca, 16);
	imprimirLista(&cabeca);

	printf("Inserindo dinamicamente o valor 4 no fim da lista: \n");
	insereFim(&cabeca, 4);
	imprimirLista(&cabeca);
	printf("Inserindo dinamicamente o valor 88 no fim da lista: \n");
	insereFim(&cabeca, 88);
	imprimirLista(&cabeca);

	printf("Excluindo o valor inicial da lista: \n");
	excluiInicio(&cabeca);
	imprimirLista(&cabeca);

	printf("Excluindo o valor final da lista: \n");
	excluiFim(&cabeca);
	imprimirLista(&cabeca);
	/*Para testar se a rotina de excluir fim realmente mudou o endereco do anterior ao no excluido para NULL,
	iremos inserir um numero no fim. A funcao insere fim depende da localizacao do endereco NULL no ponteiro final.*/
	//insereFim(&cabeca, 18); //TUDO CERTO!
	
	printf("Buscando valores na lista\n");
	printf("O retorno da funcao busca para o valor 18 eh: %d\n", buscaValor(&cabeca, 18));
	printf("O retorno da funcao busca para o valor 11 eh: %d\n", buscaValor(&cabeca, 11));

	printf("Ordenando de maneira crescente a lista: \n");
	ordenaLista(&cabeca);
	imprimirLista(&cabeca);
	
	printf("Inserindo o valor 13 em uma lista: \n");
	insereOrganizadamente(&cabeca, 13);
	imprimirLista(&cabeca);
	
	printf("Excluindo dinamicamente o valor 4 do meio da lista: \n");
	excluirValorMeioLista(&cabeca, 4);
	imprimirLista(&cabeca);
	
}

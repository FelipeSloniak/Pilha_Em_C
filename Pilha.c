#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

typedef struct tipo_pilha{
	int dados[tamanho];
	int ini;
	int topo;
}tipo_pilha;
tipo_pilha pilha;
void empilha(int elemento){
	if(pilha.topo == tamanho){
		printf("Pilha cheia.\n");
		system("pause");
	}
	else
	{
		pilha.dados[pilha.topo] = elemento;
		pilha.topo++;
	}
}
int desempilha(){
	int elemento;
	if(pilha.topo == pilha.ini){
		printf("pilha Vazia.\n");
		system("pause");
	}
	else
	{
		pilha.topo--;
		elemento = pilha.dados[pilha.topo];
		return elemento;
	}
}
int main(){
	pilha.topo = 0;
	pilha.ini = 0;
	int aux;
	
	printf("1 - Prato Vermelho.\n");
	printf("2 - Prato Verde.\n");
	printf("3 - Prato Azul.\n");
	printf("4 - Prato Branco.\n");
	printf("5 - Prato Laranja.\n");
	
	system("Pause");
	
	printf("Empilhou o Prato Vermelho.\n");
	empilha(1);
	printf("Empilhou o Prato Verde.\n");
	empilha(2);
	printf("Empilhou o Prato Azul.\n");
	empilha(3);
	printf("Empilhou o Prato Branco.\n");
	empilha(4);
	printf("Empilhou o Prato Laranja.\n");
	empilha(5);
	system("Pause");

	printf("Desempilhou Prato Laranja.\n", desempilha());
	printf("Desempilhou Prato Branco.\n", desempilha());
	printf("Desempilhou Prato Azul.\n", desempilha());
	printf("Desempilhou Prato Verde.\n", desempilha());
	printf("Desempilhou Prato Vermelho.\n", desempilha());
	system("Pause");

	printf("Empilhou o Prato Laranja.\n");
	empilha(5);
	printf("Empilhou o Prato Branco.\n");
	empilha(4);
	printf("Empilhou o Prato Azul.\n");
	empilha(3);
	printf("Empilhou o Prato Verde.\n");
	empilha(2);
	printf("Empilhou o Prato Vermelho.\n");
	empilha(1);
	system("Pause");

	printf("Desempilhou Prato Vermelho.\n", desempilha());
	printf("Desempilhou Prato Verde.\n", desempilha());
	printf("Desempilhou Prato Azul.\n", desempilha());
	printf("Desempilhou Prato Branco.\n", desempilha());
	printf("Desempilhou Prato Laranja.\n", desempilha());
	printf("Desempilhou: %d.\n", desempilha());

	return 0;
}

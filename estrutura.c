#include <stdio.h>

int main(void) {

	struct pessoa {
		char nome[50];
		char sobrenome[30];
		int idade;
	} diego;

	printf("Digite seu nome: \n");
	gets(diego.nome);
	printf("Digite seu sobrenome \n");
	gets(diego.sobrenome);
	printf("Digite sua idaide \n");
	scanf("%i", &diego.idade);

	printf("Seu nome é: %s %s \n Sua idade é: %i \n", diego.nome, diego.sobrenome, diego.idade);

}
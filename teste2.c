#include <stdio.h>

char nome[10];

int main(void) {

	void anotaNome(void);
	void mostraNome(void);

	int idade;
	int telefone;

	printf("\nSeja bem vindo! Algumas perguntas.\n");
	printf("Qual sua idade?\n");
	scanf("%i", &idade);

	printf("Qual o seu telefone?\n");
	scanf("%i", &telefone);

	printf("Qual o seu nome?\n");

	printf("***************************************\n");

	anotaNome();

	mostraNome();

	if (idade<18) {
		printf("\nVocê é menor de idade.\n");
	}	else {
		printf("\nVocê é maior de idade.\n");
	}

	printf("Seu telefone é: %i\n", telefone);

	return 0;
}

void anotaNome(void){

	for (int i=0; i<=10; ++i){
	scanf("%c", &nome[i]);
	}

}

void mostraNome(void){

	printf("\n\nSeu nome é: ");

	for (int i=0; i<=10; ++i){
		printf("%c", nome[i]);
	}

}
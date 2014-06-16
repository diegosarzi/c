#include <stdio.h>

int main(void) {

	// Criando variaveis

	int numero;
	int numero2;
	float numero3;
	float numero4;

	// Perguntando variaveis

	printf("Digite o primeiro numero inteiro: \n");
	scanf("%i", &numero);
	printf("Digete o segundo numero inteiro: \n");
	scanf("%i", &numero2);

	printf("Digete o primeiro numero composto: \n");
	scanf("%f", &numero3);
	printf("Digite o segundo numero composto: \n");
	scanf("%f", &numero4);

	// Mostrando variaveis

	printf("Primeiro inteiro: %i \n", numero);
	printf("Segundo inteiro: %i \n", numero2);
	printf("Primeiro composto: %f \n", numero3);
	printf("Segundo composto: %f \n", numero4);
}
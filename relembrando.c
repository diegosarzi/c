#include <stdio.h>

int main(void) {

	int valor = 0;
	int vertice[3] = {10, 20, 30};
	int usuario = 0;
	int opcoes;
	char nome[5] = {'L','i','n','u','X'};

	printf("Seu valor é %i\n", valor);

	for (int i=0; i <=2; i++){
		printf("%i - ", vertice[i]);
	}

	printf("Escolha uma opção:\n");
	printf("01 - Primeiro\n");
	printf("02 - Segundo\n");
	printf("03 - Terceiro\n");
	scanf("%i", &usuario);		

	if (usuario == 1) {
		printf("Seu numero é: 1\n");
	} else if (usuario == 2) {
		printf("Seu numero é: 2\n");
	} else if (usuario == 3) {
		printf("Seu numero é: 3\n");
	} else {
		printf("Numero invalido\n");
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("%c", nome[i]);
	}

	printf("\n");

	printf("Escolha de 1 a 3.\n");
	scanf("%i", &opcoes);

	switch (opcoes) {
		case 1:
		printf("Opcao 1\n");
		break;

		case 2:
		printf("Opcao 2\n");
		break;

		case 3:
		printf("Opcao 3\n");
		break;

		default:
		printf("Numero invalido\n");
		break;
	}

}
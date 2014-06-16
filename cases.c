#include <stdio.h>

int main(void){

	int i;

	printf("Digite um numero de 1 a 5\n");
	scanf("%i", &i);

	switch(i){
		case 1:
		printf("Primeiro\n");
		break;

		case 2:
		printf("Segundo\n");
		break;

		case 3:
		printf("Terceiro\n");
		break;

		case 4:
		printf("Quarto\n");
		break;

		case 5:
		printf("Quinto\n");
		break;

		default:
		printf("Numero invalido\n");
		break;
	}

	return 0;
}
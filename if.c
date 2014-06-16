#include <stdio.h>

int main(void) {

	int numero = 0;

	printf("Digite um número de 0 a 10: \n");
	scanf("%i", &numero);

	if ( numero==0 ) {
		printf("Você escolheu um número neutro. \n");
	}  else if ( numero >= 6 ) {
		printf("Su numero é muito alto. \n");
	}  else if ( numero <= 5 ) {
		printf("Seu numero é muito baixo. \n");
	}  else {
		printf("Numero invalido \n");
	}

}
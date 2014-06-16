#include <stdio.h>

int main(void) {

	int numero;
	int valor;

	printf("Bem vindo ao:\nCONVERTA SEU NUMERO EM FATORIAL! \n\n");
	printf("Escolha o numero a ser convertido: ");
	scanf("%i", &numero);

	valor = numero;

	while( valor >= 1 ) {
		numero = numero * valor;
		valor = valor - 1;
	}

	printf("O resultado é: %i \n", numero);

return 0;

}
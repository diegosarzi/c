#include <stdio.h>

int main() {

	system("clear");

	char linha[100];
	char caractere;
	int i = 0;

	printf("Digite uma palavra: \n");

	do {

		caractere = getchar();
		linha[i] = caractere;
		++i;

	} while (caractere != '\n');

	// Volta para o ultimo caracter no caso "\n" e troca pelo "\0" para o printf intender até aonde imprime.
	linha[i - 1] = '\0';

	printf("\nPalavra inserida: %s\n", linha);


	return 0;

}
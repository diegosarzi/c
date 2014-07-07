#include <stdio.h>

int main() {

	int tamanhoString(char string[]);

	char stringUsuario[20];

	printf("Digite uma (string): \n");
	scanf("%s", stringUsuario);

	int numero = tamanhoString(stringUsuario);

	printf("A String: ( %s ) tem ( %i ) de caracteres.\n", stringUsuario, numero);

	return 0;

}

int tamanhoString(char string[]) {

	int numeroCaracteres = 0;

	while (string[numeroCaracteres] != '\0') {
		++numeroCaracteres;
	}

	return numeroCaracteres;
}
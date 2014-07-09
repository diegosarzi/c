#include <stdio.h>

int main() {

	void verificaPalavra(char variavel);

	char palavra[20];
	int i = 0;

	printf("Digite uma palavra:\n");
	scanf("%s", palavra);

	while (palavra[i] != '\0') {
		verificaPalavra(palavra[i]);
		++i;
	}

}

void verificaPalavra(char variavel) {

	if ((variavel >= 'a' && variavel <= 'z') || (variavel >= 'A' && variavel <= 'Z')) { 

		printf("CARACTER\n");

	} else {

		printf("NO CARACTER\n");

	}

}
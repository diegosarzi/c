#include <stdio.h>

int main() {

	FILE *arquivo;
	arquivo = fopen("dicionario.txt", "r");
	
	if (arquivo == NULL){
		printf("O Arquivo não pode ser encontrado!\n");
		getchar();
		return 0;
	}

	char frase[1000];

	while(fgets(frase, 1000, arquivo) != NULL){
		printf("%s\n", frase);

	}

	fclose(arquivo);

	return 0;
}
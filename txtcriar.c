#include <stdio.h>

int main() {

	FILE *arquivo;
	arquivo = fopen("arquivo.txt", "w");
	fprintf(arquivo,"Mensagem escrita no txt");
	fclose(arquivo);

	return 0;
}
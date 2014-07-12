#include <stdio.h>
#include <stdbool.h>

struct dicionario {

	char palavras[30];
	char descrisoes[50];

};

bool comparaStrings(char palavra1[], char palavra2[]) {

	int i = 0;

	while (palavra1[i] == palavra2[i] && palavra1 != '\0' && palavra2[i] != '\0') {
		++i;
	}

	if (palavra1[i] == '\0' && palavra2[i] == '\0'){
		return true;
	} else {
		return false;
	}

}

int pesquisaPalavra(struct dicionario lingua[], char pesquisa[], int numDePalavras) {

	bool comparaStrings(char palavra1[], char palavra2[]);

	int i = 0;

	while (i < numDePalavras) {
		if(comparaStrings(pesquisa, lingua[i].palavras)){
			return i;
		} else {
			++i;
		}
	}
	return -1;
}

int main() {

	// Limpa tela
	system ("clear");

	// Declaracao da funcao pesquisaPalavra
	int pesquisaPalavra(struct dicionario lingua[], char pesquisa[], int numDePalavras);

	// Variaveis
	char palavra[20];
	int numeroPalavras = 5;
	int respostaPesquisa;

	// Palavras e descrisoes
	struct dicionario portugues[5] = {
		{"a", "s. m. Primeira letra do alfabeto e primeira vogal, em português e na maioria dos abecedários conhecidos."}
		{"pao", "Alimento de farinha"},
		{"leite", "Alimento matinal"},
		{"ovo", "Galinha"},
		{"linux", "Sistema Operacional"},
		{"c", "Linguagem de programação s2"}
	};

	int power = 1;

	printf("\nBem vindo ao sistema de buscas Dicionario\n");
	printf("Digite \"q\" para sair.\n");

	while (power == 1){
	printf("\nFaça sua pesquisa: ");
	scanf("%s", palavra);

		if (palavra[0] == 'q'){

		printf("byebye!\n");
		return 0;
		}

	respostaPesquisa = pesquisaPalavra(portugues, palavra, numeroPalavras);

		if (respostaPesquisa != -1){

		printf("%s = ", portugues[respostaPesquisa].palavras);
		printf("%s\n", portugues[respostaPesquisa].descrisoes);

		} else {

		printf("Palavra não encontrada!.\n");

		}

	}

	return 0;
}
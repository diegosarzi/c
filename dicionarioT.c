#include <stdio.h>
#include <stdbool.h>

// Estrutura Dicionario
struct dicionario{

	char palavras[20];
	char descricao[40];

};

// Funcao para comparar strings.
bool compararStrings(char palavra1[], char palavra2[]) {

	int i = 0;

	while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0') {
		++i;
	}

	if(palavra1[i] == '\0' && palavra2[i] == '\0') {
		return true;
	} else {
		return false;
	}

}

int procurarStrings(struct dicionario lingua[], char procurar[], int numDaPalavra) {

	bool compararStrings(char palavra1[], char palavra2[]);

	int i = 0;

	while ( i < numDaPalavra ) {

		if(compararStrings(procurar, lingua[i].palavras)) {
			return i;
		} else {
			++i;
		}

	}
return -1;
}

int main() {

	// Declarando funcao
	int procurarStrings(struct dicionario lingua[], char procurar[], int numDaPalavra);

	//Variaveis Main
	char pesquisa[20] = {"\0"};
	const int numeroPalavras = 6;
	int resultadoPesquisa;

	// Cria a linguagem Portugues na estrutura dicionairo.
	struct dicionario portugues[6] = 
	   {{"pao", "Alimento a base de farinha."},
		{"leite", "Alimento materno"},
		{"computador", "Conjunto de microsistemas"},
		{"casa", "Lar doce lar"},
		{"c", "s2"},
		{"linux", "Sistema Operacional"}};

	// Pergunta ao Usuario
	printf("Pesquise uma palavra: \n");
	scanf("%s", pesquisa);

	resultadoPesquisa = procurarStrings(portugues, pesquisa, numeroPalavras);

	if (resultadoPesquisa != -1) {

		printf("%s\n", portugues[resultadoPesquisa].descricao);

	} else {

		printf("Palavra não encontrada. \n");

	}

}
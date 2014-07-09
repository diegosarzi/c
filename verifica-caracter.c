#include <stdio.h>

int main() {

	void alfabetico(char variavel);

	char nome[20];
	printf("Digite uma plavra: \n");
	scanf("%s", nome);

	int i = 0;
	while(nome[i] != '\0'){ 

		alfabetico(nome[i]);
		++i;

	}

}

void alfabetico(char variavel) {

	if((variavel >= 'a' && variavel <= 'z') || (variavel >= 'A' && variavel <= 'Z'))
	{

		printf("CARACTER\n");

	} else {

		printf("NO CARACTER\n");

	}

}
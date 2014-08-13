#include <stdio.h>

int main() { 

	int a = 0;
	char caracter[300] = {"NULL"};
	char nome[300] = {"NULL"};

	printf("Digite seu nome: \n");

	while(caracter[a] != '\n'){

		scanf("%s", caracter[a]);
		++a;

	}

	printf("%s\n", caracter);

}
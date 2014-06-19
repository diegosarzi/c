#include <stdio.h>
#include <stdlib.h>

int main(void){

	char nome[30];

	// scanf("%s", nome);

	fgets(nome, 30, stdin);

	printf("\n%s\n", nome);

}
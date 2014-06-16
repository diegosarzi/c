#include <stdio.h>

int main(void) {

	int idade;

	printf("Digite a sua idade: \n");
	scanf("%i", &idade);

	if(idade >=0 && idade <=5) {
		printf("Voce é um bebe\n");
	} else if(idade >= 6 && idade <= 10){
		printf("Voce é uma criança\n");
	} else if(idade >=11 && idade <= 18){
		printf("Voce é um adolecente\n");
	} else if(idade >=19 && idade <= 50){
		printf("Voce é um adulto\n");
	} else {
		printf("Voce é um idoso\n");
	}

}
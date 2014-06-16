#include <stdio.h>

int main(void) {

	int opcao;
	int x, y;
	int sair;

	sair = 0;

	while(sair!=1) {

		system("clear");

		printf("MENU CALCULADORA \n");
		printf("1 + SOMAR \n");
		printf("2 - SUBITRAIR \n");
		printf("3 * MULTIPLICAR \n");
		printf("4 / DIVIDIR \n");
		printf("5 . SAIR\n\n\n");

		printf("Digite sua opção: ");
		scanf("%i", &opcao);

		if (opcao==1) {
			printf("Digite o primeiro número: ");
			scanf("%i", &x);
			printf("Digite o segundo número: ");
			scanf("%i", &y);

			printf("O resultado da soma é: %i \n", x+y);
			getchar();	getchar();

		} else if (opcao==2) {
			printf("Digite o primeiro número: ");
			scanf("%i", &x);
			printf("Digite o segundo número: ");
			scanf("%i", &y);

			printf("O resultado da subtração é: %i \n", x-y);
			getchar();	getchar();

		} else if (opcao==3) {
			printf("Digite o primeiro número: ");
			scanf("%i", &x);
			printf("Digite o segundo número: ");
			scanf("%i", &y);

			printf("O resultado da multiplicação é: %i \n", x*y);
			getchar();	getchar();

		} else if (opcao==4) {
			printf("Digite o primeiro número: ");
			scanf("%i", &x);
			printf("Digite o segundo número: ");
			scanf("%i", &y);

			printf("O resultado da divisão é: %i \n", x/y);
			getchar();	getchar();

		} else if (opcao==5) {
			printf("Bye,bye \n");
			sair = 1;

			return 0;
			
		} else {
			printf("Você não digitou uma opção correta! \n");
			getchar();	getchar();
		}

	}

}
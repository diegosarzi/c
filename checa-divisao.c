#include <stdio.h>

int main(void) {

	int num1, num2;

	printf("Escolha o primeiro numero ser dividio: \n");
	scanf("%i", &num1);
	printf("Escolha o segundo numero a ser dividio: \n");
	scanf("%i", &num2);

	if (num2 == 0) {
		printf("Nenhum numero pode ser dividio por 0\n");
	} else if (num1 % num2 == 0) {
		printf("%i é divisivel por %i.\n", num1, num2);
	} else {
		printf("Não é possivel fazer a divisão\n");
	}

	return 0;
}
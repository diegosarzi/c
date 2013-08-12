#include <stdio.h>
#include <cc50.h>

int
main(void)
{
	printf("Informe um número inteiro: ");
	int n = GetInt();

	if (n > 0)
		printf("Você escolheu um número inteiro\n");
	else if (n == 0)
		printf("Você escolheu 0\n");
	else
		printf("Você escolheu um número negativo\n");

}

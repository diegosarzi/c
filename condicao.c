#include <stdio.h>
#include <cc50.h>

int
main(void)
{
	printf("Um inteiro por favor: ");
	int n = GetInt();

	if (n > 0)
		printf("Você escolheu um número positivo!\n");
	else
		printf("Você escolheu um número negativo\n");


}

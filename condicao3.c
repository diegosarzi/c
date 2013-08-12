#include <stdio.h>

int
main(void)
{
// exemplos de if
// primeiro if simples
	if (1 > 0)
		printf("1 é maior que 0\n");
	else
		printf("1 é menor que 0\n");

// exemplo de if
// segundo exemplo utilizando o && que serve para somar atributos ao if
	if (1 && 2 > 0)
		printf("1 e 2 é maior que 0\n");
	else
		printf("1 e 2 são menores que 0\n");

// exemplo de if
// terceiro exemplo utilizando o || que serve para dizer OU
	if (1 || 2 > 0)
		printf("1 ou 2 maior que 0\n");
	else
		printf("1 ou 2 são menores que 0\n");
}

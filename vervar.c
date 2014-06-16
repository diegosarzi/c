#include <stdio.h>

int main(void){
	int x, y;
	x = 10;
	y = 20;

	printf("A variavel x é igual a: %i\nA variavel y é igual a: %i.\n", x, y);

	x = x+y;

	printf("A soma das variaveis: %i\n", x);
}
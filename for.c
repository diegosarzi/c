#include <stdio.h>

int main(void) {

	int contador;
	int vezes;

	for(vezes = 1; vezes <= 3; vezes = vezes + 1){
		for(contador = 1; contador <= 10; contador = contador + 1) {
			printf("%i\n", contador);
		}
	}
}
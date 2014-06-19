#include <stdio.h>

int main(void){

	float a, b;
	float resultado;

	float somaNumeros(float x, float y);

	printf("Escreva dois numeros: \n");
	scanf("%f", &a);
	scanf("%f", &b);

	resultado = somaNumeros(a, b);

	printf("A soma dos valores é: %f\n", resultado);

	return 0;
}

float somaNumeros(float x, float y) {

	float valorAbsoluto(float x);

	if (x < 0) {
		x = valorAbsoluto(x);
	}

	if (y < 0) {
		y = valorAbsoluto(y);
	}

	return x + y;

}

float valorAbsoluto(float x) {
	return x * -1;
}
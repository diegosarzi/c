#include <stdio.h>

int main(void){

	float notas[4] = {0};
	float total = 0;
	float media = 0;

	printf("Insira 4 notas: \n");

	for (int i = 0; i < 4; i++)
		scanf("%f", &notas[i]);

	for (int i = 0; i < 4; i++)
		total += notas[i];

	media = total / 4;

	printf("A sua media é: %f\n", media);

	return 0;

}
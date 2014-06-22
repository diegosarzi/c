#include <stdio.h>

struct horario {

	int horas;
	int minutos;
	int segundos;

};

int main(void) {

	void recebeDados (struct horario lista[5]);
	void imprimeDados (struct horario lista[5]);

	struct horario master[5];

	recebeDados(master);

	imprimeDados(master);

	return 0;

}

void recebeDados (struct horario lista[5]) {

	int i;

	for (i = 0; i < 5; ++i) {

		printf("Digite o %i horario(hh:mm:ss): ", i + 1);
		scanf("%i:%i:%i", &lista[i].horas, &lista[i].minutos, &lista[i].segundos);

	}

}


void imprimeDados (struct horario lista[5]) {

	int i; 

	for (i = 0; i < 5; ++i) {

		printf("O resultado %i é: %i:%i:%i \n", i + 1, lista[i].horas, lista[i].minutos, lista[i].segundos);

	}


}
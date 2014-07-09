#include <stdio.h>

int main(void) {

	struct horario
	{

		int horas;
		int minutos;
		int segundos;

	};

	struct horario agora;

	agora.horas = 00;
	agora.minutos = 55;
	agora.segundos = 30;

	printf("\n %i:%i:%i \n\n", agora.horas, agora.minutos, agora.segundos);
}
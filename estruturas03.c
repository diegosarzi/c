#include <stdio.h>

int main(void) {

	struct horario {
		int horas;
		int minutos;
		int segundos;
	};

    struct horario agora;
	agora.horas = 10;
	agora.minutos = 20;
	agora.segundos = 30;

	printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

	struct horario depois[3] = {{10, 20, 30}, {20, 30, 40}, {30, 40, 50}, {40, 50, 60}, {50, 60, 70}, {60, 70, 80}};

	for (int i = 0; i < 5; ++i) {

		printf("%i:%i:%i\n", depois[i].horas, depois[i].minutos, depois[i].segundos);

	}

	return 0;
}
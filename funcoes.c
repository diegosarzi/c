#include <stdio.h>

int main(void) {

	// dizer que existe a função
	void inserirTexto (void);

	// rodar funcao 3 vezes
	inserirTexto();
	inserirTexto();
	inserirTexto();
	
	return 0;

}

void inserirTexto (void) {

	// criar variavel local automatica
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *= 2;

	// criar variavel local estatica 
	static int variavelLocalEstatica = 2;
	variavelLocalEstatica *= 2;

	printf("Variavel Local Automatica. %i \n", variavelLocalAutomatica);
	printf("Variavel Local Estatica = %i \n", variavelLocalEstatica);

}
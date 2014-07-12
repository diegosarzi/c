#include <stdio.h>

const int BUFFER = 1000;

int main() {

	char texto[] = "abacharelar : v. Pron. Tornar-se ou imitar bacharel.";
	char novoTexto[BUFFER];
	char textoModificado[BUFFER];
	int c = 0;

	printf("\nTexto Original em novoTexto: \n");

	// leitura
	while ( texto[c] != '\0' ) {

		novoTexto[c] = texto[c];

		printf("%c", novoTexto[c]);

		++c;
	}

	printf("\n%s\n", novoTexto);

	printf("\nTexto Modificado em novoTexto: \n");

	// reescrever
	while (c != 0){

		//novoTexto[c] = novoTexto[c + 11];

		if(texto[c] == ':' && texto[c + 1] == ' '){
			novoTexto[c] = ' ';

		}

		if(texto[c] == ' ' && texto[c  - 1] == ':'){
			novoTexto[c] = '\"';
		}

		
		if(texto[c] == ' ' && texto[c + 1] == ':'){

			novoTexto[c] = ',';
		}

		if(texto[c] == '\0' && texto[c] == '.') {
			novoTexto[c] = '}';
		}

		if(texto[c] == '.' && texto[c + 1] == '\0') {
			novoTexto[c] = '\"';
			novoTexto[c + 1] = '}';
			novoTexto[c + 2] = ',';
			novoTexto[c + 3] = ' ';
			novoTexto[c + 4] = '\0';
		}

		--c;

	}

	while ( novoTexto[c] != '\0'){
		textoModificado[c + 2] = novoTexto[c];
		++c;
	}

	textoModificado[0] = '{';
	textoModificado[1] = '"';

	printf("%s\n", novoTexto);
	printf("%s\n", textoModificado);

	return 0;
}
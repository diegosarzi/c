#include <stdio.h>

const int BUFFER = 1000;

int main() {

	char texto[] = "acanalhar : v. 1. Tr. dir. Dar aparência de canalha a; tornar canalha, abjeto ou desprezível. 2. Tr. dir. Gír. Prejudicar um trabalho. 3. Pron. Aviltar-se, tornar-se canalha.";
	char novoTexto[BUFFER];
	char textoModificado[BUFFER];
	int c = 0;

	printf("\nTexto Original em novoTexto: \n");

	// leitura
	while ( texto[c] != '\0' ) {

		novoTexto[c] = texto[c];

//		printf("%c", novoTexto[c]);

		++c;
	}

	printf("%s\n", novoTexto);

	printf("\nTexto Modificado em novoTexto: \n");

	// reescrever
	while (c != 0){

		//novoTexto[c] = novoTexto[c + 11];

		if(texto[c] == ':' && texto[c + 1] == ' '){
			novoTexto[c] = ',';

		}

		if(texto[c] == ' ' && texto[c  - 1] == ':'){
			novoTexto[c] = '\"';
		}

		
		if(texto[c] == ' ' && texto[c + 1] == ':'){

			novoTexto[c] = '\"';
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

	// printf("%s\n", novoTexto);
	printf("%s\n\n", textoModificado);

	return 0;
}
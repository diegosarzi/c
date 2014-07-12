#include <stdio.h>

const int BUFFER = 1000;

int main() {

	char texto[] = "abacharelar : v. Pron. Tornar-se ou imitar bacharel.";
	char novoTexto[BUFFER];
	int elementos = 11;

	int c = 0;
	int d = 0;

	printf("\nTexto Original em novoTexto: \n");

	// leitura
	while ( texto[c] != '\0' ) {

		novoTexto[c] = texto[c];

		printf("%c", novoTexto[c]);

		++c;
	}

	//printf("%s\n", novoTexto);

	d = c;

	printf("\n%s\n", novoTexto);

	printf("\n%i\n", c);

	printf("\nTexto Modificado em novoTexto: \n");

// 52

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

	while(d != 0){
//		printf("%i\n", d);
		novoTexto[c] = novoTexto[d - 1];	
		--d;
		++c;
	}

	printf("%i\n", c);

//	novoTexto[0] = '{';

	printf("%s\n", novoTexto);


/*	printf("%s\n", novoTexto);
	printf("%i\n", c);
*/

	return 0;
}
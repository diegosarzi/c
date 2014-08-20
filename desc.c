#include <stdio.h>

// Tecnica de Encriptografia.

int BUFFER = 99999;

int main(){

	char caracter;
	char texto[BUFFER];
	char resultado[BUFFER];
	char alfabeto[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u',
						'v','w','x','z','a','b','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
						'P','Q','R','S','T','U','V','W','X','Z','A','B','1','2','3','4','5','6','7','8','9',
						'0','1','2',',','.',',','.','!','?','!','?',' ','\0',' '};
	int i = 0;
	int e = 0;

	printf("Digite um texto:\n");
	
	do {
		caracter = getchar();
		texto[i] = caracter;
		++i;
	} while (caracter != '\n');

	texto[i - 1] = '\0';

	i = 0;

	while (alfabeto[e] != '\0'){
		if (texto[i] == alfabeto[e]){
			resultado[i] = alfabeto[e + 2];
			++i;
			e = -1;
		}
		++e;
	}

	resultado[i] = '\0';


	printf("texto: %s\n", texto);
	printf("resultado: %s\n", resultado);

	BUFFER = 0;

	return 0;

}
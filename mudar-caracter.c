#include <stdio.h>

int main() {

	char caracter;
	char frase[] = "abadernar : v. Tr. dir. Náut. Apertar ou segurar com badernas.\n abacinar : v. Abaçanar.";

	printf("Frase:\n");
	printf("%s\n", frase);

	int i = 0;


	while(frase[i] != ' '){
		printf("difrente\n");
		++i;
	} 

	frase[i] = '"';
	++i;
	frase[i] = '}';
	++i;
	frase[i] = ',';
	++i;
	frase[i] = ' ';
	++i;
	frase[i] = '{';
	++i;
	frase[i] = '"';


	while(frase[i] != '\n'){
		printf("difrente\n");
		++i;
	} 

	frase[i] = '"';
	++i;
	frase[i] = '}';


	printf("%s\n", frase);

}
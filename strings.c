#include <stdio.h>

int main() {


	void concatenarStrings(char string1[], int t1, char string2[], int t2, char string3[]);

	char palavra1[] = {'v','i','v','a',' '};
	char palavra2[] = {'l', 'i', 'n', 'u', 'x'};
	char palavra3[10];

	int i;


	concatenarStrings(palavra1, 5, palavra2, 5, palavra3);

	for ( i = 0; i < 10; ++i ) {

		printf("%c", palavra3[i]);

	}
	
	printf("\n");

	return 0;
}


	void concatenarStrings(char string1[], int t1, char string2[], int t2, char string3[]) {


		int i, j;

		for ( i = 0; i < t1; ++i) {

			string3[i] = string1[i];

		}

		for ( j = 0; j < t2; ++j) {

			string3[t1 + j] = string2[j];

		}


	}

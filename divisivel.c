#include <stdio.h>

int main() {

int i;

for(i = 1; i <= 20; ++i){

	// i % 3 == 0 // % significa a sobra da divisao == valor
	if(i % 3 == 0 || i % 9 == 0){
		printf("%i - Número divisivel por 3 ou 9\n", i);
		break;
	} else {
		printf("%i - Não divisivel por 3 ou 9\n", i);
	}
}

}
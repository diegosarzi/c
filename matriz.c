#include <stdio.h>

int main(void) {

	int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	void funcaoPrint(int x[3][3]);

	funcaoPrint(matriz);

	return 0;

}

void funcaoPrint(int x[3][3]) {

	int i, j;

	for(i = 0; i < 3; ++i){

		for(j = 0; j < 3; ++j){
			printf("%i ", x[i][j]);
		}
		printf("\n");
	}
}
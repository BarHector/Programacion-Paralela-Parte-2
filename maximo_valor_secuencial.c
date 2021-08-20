#include <stdio.h>

int buscaMaximo(int *a, int n);

int main(){
	printf("---------- ACTIVIDAD CRITICAL VERSION SECUENCIAL ----------\n");

	int a[10] = {12, 9, 10, 21, 29, 1, 11, 55, 99, 25};

	buscaMaximo(a, 10);

	return 0;
}

int buscaMaximo(int *a, int n){
	int max, i;
	max = a[0];

	for(int j=0; j<n; j++){
		printf("%i  |  ", a[j]);
	}

	printf("\nPrimer max: %i", max);

	for(i=0; i<n; i++){
		if(a[i] > max){
			max = a[i];
			printf("\nNuevo max: %i", max);
		}
	}

	printf("\nValor Maximo: %i\n", max);

	return 0;
}

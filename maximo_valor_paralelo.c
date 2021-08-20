#include <stdio.h>
#include <omp.h>

int buscaMaximo(int *a, int n);

int main(){
	int a[10]={12, 9, 10, 21, 29, 1, 11, 55, 99, 25};

	buscaMaximo(a, 10);

	return 0;
}

int buscaMaximo(int *a, int n){
	int max, i;
	max = a[0];

	for(int j=0; j<n; j++){
		printf("%i  |  ", a[j]);
	}

	printf("\nPrimer max: %i\n", max);

	#pragma omp parallel for num_threads(2)
	for(i=1; i<n; i++){
		if(a[i] > max){
			#pragma omp critical			
            {
				if(a[i]>max)
					max=a[i];
					printf("Nuevo max: %i\n", max);
			}
		}
	}

	printf("-> Valor maximo: %i\n", max);

	return 0;
}
#include <conio.h>
#include <stdio.h>

int main() {
	float matriz[3][4];
	int i, j;
	
	for (i= 0; i< 3; i++) {
		for (j= 0; j< 4; j++) {
			printf("Informe um numero: [%d, %d]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	for (i= 0; i< 3; i++) {
		for (j= 0; j< 4; j++) {
			printf("%4f ", matriz[i][j]);			
		}
		printf("\n");
	}
	
	printf("\n");
	printf("linha 0 e coluna 0: %f\n", matriz[0][0]);
	printf("linha 2 e coluna 3: %f\n", matriz[2][3]);
	
	getch();
	return 0;
}
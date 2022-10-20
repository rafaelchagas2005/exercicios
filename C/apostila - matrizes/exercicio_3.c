#include <conio.h>
#include <stdio.h>

int main() {
	float matrizA[2][3], matrizB[3][2];
	int i, j;
	
	for (i= 0; i< 2; i++) {
		for (j= 0; j< 3; j++) {
			printf("Informe um numero: [%d, %d]: ", i, j);
			scanf("%f", &matrizA[i][j]);
		}
	}
	
	for (i= 0; i< 3; i++) {
		for (j= 0; j< 2; j++) {
			matrizB[i][j] = (matrizA[j][i]);
		}
	}
	
	for (i= 0; i< 3; i++) {
		for (j= 0; j< 2; j++) {
			printf("%.0f ", matrizB[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
#include <conio.h>
#include <stdio.h>

int main() {
	float matrizA[3][3];
	int i, j, somaDiag1;
	
	for (i= 0; i< 3; i++) {
		for (j= 0; j< 3; j++) {
			printf("Informe um numero [%d, %d]: ", i, j);
			scanf("%f", &matrizA[i][j]);
		}
	}
	
	for (i= 0; i< 3; i++) {
		for (j= 0; j< 3; j++) {
			somaDiag1 = matrizA[0][0] + matrizA[1][1] + matrizA[2][2];
		}
	}
	
	printf("Soma da diagonal 1 = %d", somaDiag1);
}
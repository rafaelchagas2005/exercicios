#include <conio.h>
#include <stdio.h>
#include <math.h>

int main() {
	float vetA[5][5], vetB[5][5];
	int i, j;
	
	for (i= 0; i< 5; i++) {
		for (j = 0; j< 5; j++) {
			printf("Informe um numero: [%d, %d]", i, j);
			scanf("%f", &vetA[i][j]);
		}
	}
	
	for (i= 0; i< 5; i++) {
		for (j = 0; j< 5; j++) {
			vetB[i][j] = (pow(vetA[i][j], 3));
		}
	}
	
	for (i= 0; i< 5; i++) {
		for (j = 0; j< 5; j++) {
			printf("%5f ", vetB[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
#include <conio.h>
#include <stdio.h>

int main() {
	float vetA[4][3], somarLinha;
	int i, j, linha;
	
	for (i= 0; i< 4; i++) {
		for (j= 0; j< 3; j++) {
			printf("Informe um numero [%d, %d]: ", i, j);
			scanf("%f", &vetA[i][j]);
		}
	}
	
	printf("\n");
	printf("Qual linha quer somar? ");
	scanf("%d", &linha);
	
	for (i= 0; i< 4; i++) {
		for (j= 0; j< 3; j++) {
			if (i == linha) {
				somarLinha = somarLinha + vetA[i][j];
			}
		}
	}
		
	printf("Linha somada: %d\n", linha);
	printf("Total da soma da linha: %f", somarLinha);
	
	getch();
	return 0;
}
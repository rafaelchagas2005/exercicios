#include <conio.h>
#include <stdio.h>

int main() {
	float vetA[4][3];
	int i, j, linha, coluna;
	
	for (i= 0; i< 4; i++) {
		for (j= 0; j< 3; j++) {
			printf("Informe um numero [%d, %d]: ", i, j);
			scanf("%f", &vetA[i][j]);
		}
	}
	
	printf("\n");
	printf("Qual linha voce quer ver? ");
	scanf("%d", &linha);
	
	printf("\n");
	printf("Qual coluna voce quer ver? ");
	scanf("%d", &coluna);
	
	printf("\n");
		
	printf("O numero armazenado na linha %d e na coluna %d e: %.0f", linha, coluna, vetA[linha][coluna]);
		
	getch();
	return 0;
}
#include <conio.h>
#include <stdio.h>

int main() {
	int i, numbers[10], sumOfSquares = 0;
	
	for (i= 0; i< 10; i++) {
		printf("Informe um numero: ");
		scanf("%d", &numbers[i]);
		
		sumOfSquares += (numbers[i] * numbers[i]);
	}
	
	printf("A soma dos quadrados dos numeros lidos: %d", sumOfSquares);
	
	getch();
	return 0;
}
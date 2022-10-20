#include <conio.h>
#include <stdio.h>

int main() {
	int addNumbers = 0, i = 1, negative = 0, number, positive = 0;
	float average = 0;
	
	for (i= 0; i!= 0; i++) {
		printf("Informe um numero: ");
		scanf("%d", &number);
		
		if (number >= 0 && number != 0) {
			positive++;
		} else {
			negative++;
		}
		
		if (number == 0) {
			break;
		}
		
		addNumber += number;
	}
	
	average = (float) addNumbers / (i);
	
	printf("Media dos valores: %f\n", average);
	printf("Total de valores positivos: %d\n", positive);
	printf("Total de valores negativos: %d\n", negative);
	printf("Percentual de valores positivos: %f\n", (float) (positive / (i) * 100));
	printf("Percentual de valores negativos: %f\n", (float) (negative / (i) * 100));
}
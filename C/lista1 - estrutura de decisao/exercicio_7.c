#include <conio.h>
#include <stdio.h>

int main() {
	float number;
	
	printf("Informe um numero: ");
	scanf("%f", &number);
	
	if (number % 2 == 0) {
		number += 5;
		printf("Numero: %.0f", number);
	} else {
		number += 8;
		printf("Numero: %.0f", number);
	}
	
	getch();
	return 0;
}
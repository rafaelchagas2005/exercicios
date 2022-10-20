#include <conio.h>
#include <stdio.h>

int main() {
	float number;
	
	printf("Informe um numero: ");
	scanf("%f", &number);
	
	if (number > 0) {
		number *= 2;
		printf("Numero: %.0f", number);
	} else {
		number *= 3;
		printf("Numero: %.0f", number);
	}
	
	getch();
	return 0;
}
#include <conio.h>
#include <stdio.h>

int main() {
	int number;
	
	printf("Informe um numero: ");
	scanf("%d", &number);
	
	if (number % 2 == 0) {
		printf("E PAR.");
	} else {
		printf("E IMPAR.");
	}
	
	getch();
	return 0;
}
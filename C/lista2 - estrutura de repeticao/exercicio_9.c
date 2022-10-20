#include <conio.h>
#include <stdio.h>

int main() {
	int i, negativesCount = 0, number;
	
	for (i= 0; i< 5; i++) {
		printf("Informe um numero: ");
		scanf("%d", & number);
		
		if (number < 0) {
			negativesCount++;
		}
	}
	
	printf("Quantidade de numeros negativos: %d", negativesCount);
	
	getch();
	return 0;
}
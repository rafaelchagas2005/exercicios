#include <conio.h>
#include <stdio.h>

int main() {
	int count, i;
	float number;
	
	for (i= 0; i< 10; i++) {
		printf("Informe um numero: ");
		scanf("%f", &number);
		
		if (number >= 30 && number <= 90) {
			count++;
		}
	}
	
	printf("Quantidade de valores entre 30 e 90: ", count);
	
	getch();
	return 0;
}
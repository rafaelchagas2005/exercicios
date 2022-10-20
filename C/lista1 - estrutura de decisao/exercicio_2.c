#include <conio.h>
#include <stdio.h>

int main() {
	int number;
	
	printf("Informe um número: ");
	scanf("%d", &number);
	
	if (number >= 1 && number <= 9) {
		printf("O valor está dentro da faixa permitida.");
	} else {
		printf("O valor está fora da faixa permitida.");
	}
	
	getch();
	return 0;
}
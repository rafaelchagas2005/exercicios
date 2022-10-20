#include <conio.h>
#include <stdio.h>

int main() {
	int i;
	float number, numbers[10];
	
	for (i= 0; i< 10; i++) {
		printf("Informe um numero: ");
		scanf("%f", &numbers[i]);
	}
	
	for (i= 9; i>= 0; i--) {
		printf("%.0f\n", numbers[i]);
	}
	
	getch();
	return 0;
}
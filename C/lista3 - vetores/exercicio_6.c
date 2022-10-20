#include <conio.h>
#include <stdio.h>

int main() {
	int i, multiplication = 1, numbers[5], sum = 0;
	
	for (i= 0; i< 5; i++) {
		printf("Informe um numero: ");
		scanf("%d", &numbers[i]);
		
		sum += numbers[i];
		multiplication *= numbers[i];
	}
	
	printf("Total da soma dos numeros: %d \n", sum);
	printf("Total da multiplicacao dos numeros: %d \n", multiplication);
	
	getch();
	return 0;
}
#include <conio.h>
#include <stdio.h>

int main() {
	float number1, number2, result;
	int operation;
	
	printf("Informe o numero 1: ");
	scanf("%f", &number1);
	printf("Informe o numero 2: ");
	scanf("%f", &number2);
	
	printf("\n");
	
	printf("Escolha uma operacao: \n");
	printf("1 - Adicao \n");
	printf("2 - Subtracao \n");
	printf("3 - Multiplicacao \n");
	printf("4 - Divisao \n\n");
	
	printf("Informe a operacao desejada: ");
	scanf("%d", &operation);
	
	if (operation == 1) {
		result = number1 + number2;
		printf("\nVoce escolheu a operacao: %d, o resultado e: %.0f", operation, result);
	} else if (operation == 2) {
		result = number1 - number2;
		printf("\nVoce escolheu a operacao: %d, o resultado e: %.0f", operation, result);
	} else if (operation == 3) {
		result = number1 * number2;
		printf("\nVoce escolheu a operacao: %d, o resultado e: %.0f", operation, result);
	} else if (operation == 4) {
		if (number2 == 0) {
			printf("Não e possivel dividir por zero.");
		} else {
			result = number1 / number2;
			printf("\nVoce escolheu a operacao: %d, o resultado e: %.0f", operation, result);
		}
	}
	
	getch();
	return 0;
}
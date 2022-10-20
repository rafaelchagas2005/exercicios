#include <conio.h>
#include <stdio.h>

int main() {
	float height, imc, weight;
	
	printf("Informe uma altura: ");
	scanf("%f", &height);
	printf("Informe um peso: ");
	scanf("%f", &weight);
	
	imc = weight / (height * height);
	
	if (imc < 18.5) {
		printf("Abaixo do peso.");
	} else if (imc >= 18.5 && imc < 25) {
		printf("Peso normal.");
	} else if (imc >= 25 && imc < 30) {
		printf("Acima do peso.");
	} else if (imc >= 30) {
		printf("Obeso.");
	}
	
	getch();
	return 0;
}
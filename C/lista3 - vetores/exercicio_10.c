#include <conio.h>
#include <stdio.h>

int main() {
	int i;
	char months[12]; 
	float temperatures[12], sumOfTemperatures = 0, annualAverageTemperatures = 0;
	
	for (i= 0; i< 12; i++) {
		printf("Informe uma temperatura: ");
		scanf("%f", &temperatures[i]);
		
		sumOfTemperatures += temperatures[i];
	}
	
	annualAverageTemperatures = sumOfTemperatures / 12;
		
	for (i= 0; i< 12; i++) {
		if (temperatures[i] >= annualAverageTemperatures) {
			if (i == 0) {
		 		printf("Janeiro \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 1) {
		 		printf("Fevereiro \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 2) {
		 		printf("Marco \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 3) {
		 		printf("Abril \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 4) {
		 		printf("Maio \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 5) {
		 		printf("Junho \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 6) {
		 		printf("Julho \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 7) {
		 		printf("Agosto \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 8) {
		 		printf("Setembro \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 9) {
		 		printf("Outubro \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 10) {
		 		printf("Novembro \n");
		 		printf("Temperatura: %.1f \n", temperatures[i]);
			} else if (i == 11) {
		 		printf("Dezembro \n");
		 		printf("Temperatura: %.1f ", temperatures[i]);
			}			 
		}
	}
	
	getch();
	return 0;
}
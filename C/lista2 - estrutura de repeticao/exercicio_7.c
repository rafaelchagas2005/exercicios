#include <conio.h>
#include <stdio.h>

int main() {
	int age, heightWeight = 0, sumAge = 0, ageHeight = 0, i;
	float height, weight;
	
	for (i= 0; i< 10; i++) {
		printf("Informe uma idade: ");
		scanf("%d", &age);
		printf("Informe uma altura: ");
		scanf("%f", &height);
		printf("Informe um peso: ");
		scanf("%f", &weight);
		
		if (weight > 90 && height < 1.50) {
			heightWeight++;
		}
		
		if (age >= 10 && age <= 30 && height > 1.90) {
			ageHeight++;
		}
		
		sumAge += age;
	}
	
	printf("Media de idade: %f\n", (float) sumAge / i);
	printf("Pessoas com peso maior que 90kg com menos de 1.50m: %d\n", heightWeight);
	printf("Percentual de pessoas entre 10 e 30 anos com mais de 1.90m: %f\n", (float) (ageHeight / (i) * 100));
	
	getch();
	return 0;
}
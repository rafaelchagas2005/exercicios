#include <conio.h>
#include <stdio.h>

int main() {
	int age, ageGreaterThan50 = 0, personsAgeWithBetween10And20 = 0, heightBetween10And20 = 0, weightLessThan40 = 0, i;
	float height, averageHeight = 0, weight;
	
	for (i= 0; i< 25; i++) {
		printf("Informe uma idade: ");
		scanf("%d", &age);
		printf("Informe uma altura: ");
		scanf("%f", &height);
		printf("Informe um peso: ");
		scanf("%f", &weight);
		
		if (age > 50) {
			ageGreaterThan50++;
		} else if (age >= 10 && age <= 20) {
			personsAgeWithBetween10And20++;
			heightBetween10And20 += height;
		}
		
		if (weight < 40) {
			weightLessThan40++;
		}
	}
	
	averageHeight = (float) (heightBetween10And20 / personsAgeWithBetween10And20);
	
	printf("Total de pessoas com mais de 50 anos: %d\n", ageGreaterThan50);
	printf("Media da altura das pessoas com idade entre 10 e 20 anos: %f cm\n", averageHeight);
	printf("Percentual de pessoas com peso menor 40kg: %f", (float) (weightLessThan40 / (i) * 100));
}
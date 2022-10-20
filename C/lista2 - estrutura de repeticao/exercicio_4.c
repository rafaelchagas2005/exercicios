#include <conio.h>
#include <stdio.h>

int main() {
	int age, ageGreaterThan18, i;
	
	for (i= 0; i< 10; i++) {
		printf("Informe uma idade: ");
		scanf("%d", &age);
		
		if (age >= 18) {
			ageGreaterThan18++;
		}
	}
	
	printf("Pessoas com idade maior que 18 anos: %d", ageGreaterThan18);
	
	getch();
	return 0;
}
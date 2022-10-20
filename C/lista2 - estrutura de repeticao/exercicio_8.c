#include <conio.h>
#include <stdio.h>

int main() {
	int age, i = 1, sumAge = 0;
	float average = 0;
	
	for (i= 0; i!= 0; i++) {
		printf("Informe uma idade: ");
		scanf("%d", &age);
		
		if (age != 0) {
			sumAge += age;
		} else {
			break;
		}
	}
	
	average = (float) sumAge / i;
	
	printf("Media das idades: %f", average);
	
	getch();
	return 0;
}
#include <conio.h>
#include <stdio.h>

int main() {
	int grade;
	
	printf("Informe uma nota: ");
	scanf("%d", &grade);
	
	if (grade < 3) {
		printf("Conceito E.");		
	} else if (grade >= 3 && grade <= 5) {
		printf("Conceito D.");
	} else if (grade >= 6 && grade <= 7) {
		printf("Conceito C.");
	} else if (grade >= 8 && grade <= 9) {
		printf("Conceito B.");
	} else if (grade == 10) {
		printf("Conceito A.");
	}
	
	getch();
	return 0;
}
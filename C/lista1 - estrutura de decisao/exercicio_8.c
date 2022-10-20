#include <conio.h>
#include <stdio.h>

int main() {
	float grade1, grade2, average;
	
	printf("Informe a nota 1: ");
	scanf("%f", &grade1);
	printf("Informe a nota 2: ");
	scanf("%f", &grade2);
	
	average = (grade1 + grade2) / 2;
	
	if (avrage >= 7) {
		printf("O aluno esta aprovado(a).");
	} else {
		printf("O aluno(a) esta de exame.");
	}
	
	getch();
	return 0;
}
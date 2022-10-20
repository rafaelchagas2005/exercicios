#include <conio.h>
#include <stdio.h>

int main() {
	int i, sumGrades = 0;
	float grades[4];
	
	for (i= 0; i< 4; i++) {
		printf("Informe uma nota: ");
		scanf("%f", &grades[i]);
	}
	
	printf("\n");
	
	for (i= 0; i< 4; i++) {
		printf("Nota %d: %.1f \n", (i + 1), grades[i]);
		sumGrades += grades[i];
	}
	
	printf("\n");
	
	printf("Media das notas: %.2f", (float) (sumGrades / 4));
	
	getch();
	return 0;
}
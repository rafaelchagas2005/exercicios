#include <conio.h>
#include <stdio.h>

int main() {
	int ages[3], i, totalHighStudents = 0;
	float averageHeights = 0, heights[3], sumHeights = 0;
	
	for (i= 0; i< 3; i++) {
		printf("Informe uma altura: ");
		scanf("%f", &heights[i]);
		printf("Informe uma idade: ");
		scanf("%d", &ages[i]);
		
		sumHeights += heights[i];
	}
	
	averageHeights = sumHeights / 3;
	
	for (i= 0; i< 3; i++) {
		if (ages[i] >= 13 && heights[i] >= averageHeights) {
			totalHighStudents++;
		}
	}
	
	printf("Existem %d alunos com mais de 13 anos acima da media de altura", totalHighStudents);
	
	getch();
	return 0;
}
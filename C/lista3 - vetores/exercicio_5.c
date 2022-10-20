#include <conio.h>
#include <stdio.h>

int main() {
	int i, j, averageCountGreaterThan7 = 0;
	float grades[4], gradesAverage[10];
	
	for (i= 0; i< 11; i++) {
		for (j= 0; j< 4; j++) {
			printf("Informe a nota do aluno número %d: ", i);
			scanf("%f", &grades[j]);			
		}
		
		gradesAverage[i] = (grades[0] + grades[1] + grades[2] + grades[3]) / 4;		
	}
	
	for (i= 0; i< 11; i++) {
		if (gradesAverage[i] >= 7.0) {
			averageCountGreaterThan7++;
		}
	}
	
	printf("Numero de alunos com media maior que 7: %d", averageCountGreaterThan7);
	
	getch();
	return 0;
}
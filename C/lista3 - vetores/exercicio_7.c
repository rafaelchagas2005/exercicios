#include <conio.h>
#include <stdio.h>

int main() {
	int ages[5], i;
	float heights[5];
	
	for (i= 0; i< 5; i++) {
		printf("Informe uma altura: ");
		scanf("%f", &heights[i]);
		printf("Informe uma idade: ");
		scanf("%d", &ages[i]);		
	}
	
	for (i= 4; i>= 0; i--) {
		printf("%d ", ages[i]);
		printf("%.0f \n", heights[i]);		
	}
	
	getch();
	return 0;
}
#include <conio.h>
#include <stdio.h>

int main() {
	int i, number;
	
	for (i= 0; i< 5; i++) {
		printf("Informe um numero: ");
		scanf("%d", &number);
	}
	
	for (i= 0; i< 5; i++) {
		printf("%d \n");		
	}
	
	getch();
	return 0;
}
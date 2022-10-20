#include <conio.h>
#include <stdio.h>

int main() {
	int vetA[7][8];
	int i, j;
	
	for (i= 0; i< 7; i++) {
		for (j= 0; j< 8; j++) {
			vetA[i][j] = i + i;
		}
	}
	
	printf("\n");
	
	for (i= 0; i< 7; i++) {
		for (j= 0; j< 8; j++) {
			printf("%8d ", vetA[i][j]);
		}
		printf("\n");
	}

	getch();
	return 0;
}
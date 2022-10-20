#include <conio.h>
#include <stdio.h>

int main() {
	int table = 7, i;
	
	for (i= 1; i< 10; i++) {
		printf("%d X %d = %d \n", table, i, (table * i));
	}
	
	getch();
	return 0;
}
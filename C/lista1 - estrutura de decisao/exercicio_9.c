#include <conio.h>
#include <stdio.h>

int main() {
	int yearOfBirth, difference;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &yearOfBirth);
	
	difference = 2022 - yearOfBirth;
	
	if (difference >= 18) {
		printf("Idade para votar e tirar CNH.");
	} else if (difference >= 16 && difference <= 17) {
		printf("Idade para votar, mas ainda nao pode tirar CNH.");
	} else {
		printf("Nao tem idade para votar, nem para tirar CNH.");
	}
	
	getch();
	return 0;
}
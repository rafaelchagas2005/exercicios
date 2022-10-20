#include <conio.h>
#include <stdio.h>
#include <string.h>

int main() {
	char gender, name[40], maritalStatus[11];
	float marriedTime;
	
	printf("Informe um nome: ");
	scanf("%s", &name);
	printf("Informe um estado civil: ");
	scanf("%s", &maritalStatus);
	printf("Informe um genero: ");
	scanf(" %c", &gender);
	
	printf("\n");
	
	if (gender == 'F' && strcmp(maritalStatus, "CASADA") == 0) {
		printf("Informe o tempo de casada: ");
		scanf("%f", &marriedTime);
		
		printf("\n");
		
		printf("Nome: %s\n", name);
		printf("Estado civil: %s\n", maritalStatus);
		printf("Sexo: %c\n", gender);
		printf("Tempo de casada: %d ano(s)", marriedTime);			
	} else {
		printf("Nome: %s\n", name);
		printf("Estado civil: %s\n", maritalStatus);
		printf("Sexo: %c\n", gender);
		printf("Tempo de casada: %d ano(s)", marriedTime);
	}
	
	getch();
	return 0;
}
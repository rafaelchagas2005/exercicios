#include <conio.h>
#include <stdio.h>

int main() {
	char name[40];
	float value, bonus;
	int i;
	
	for (i= 0; i< 10; i++) {
		printf("Informe um nome: ");
		scanf("%s", &name);
		printf("Informe o valor das compras do ano passado: ");
		scanf("%f", &value);
		
		if (value < 1000) {
			bonus = value * 0.1;
			printf("Nome do cliente: %s \n", name);
			printf("Valor do bonus: %.1f \n", bonus);
		} else {
			bonus = value * 0.15;
			printf("Nome do cliente: %s \n", name);
			printf("Valor do bonus: %.1f \n", bonus);
		}
	}
	
	getch();
	return 0;
}
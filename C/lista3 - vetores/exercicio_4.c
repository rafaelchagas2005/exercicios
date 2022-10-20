#include <conio.h>
#include <stdio.h>

int main() {

    int pairsCount = 0, oddCount = 0, i, numbers[20], pairs[10], odd[10];
    
    for (i = 0; i < 20; i++) {
        printf("\nInforme o %d numero: ", i + 1);
        scanf("%d%*c", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            pairs[pairsCount] = numbers[i];
            pairsCount++;
        } else {
            odd[oddCount] = numbers[i];
            oddCount++;
        }
    }
    
    printf("\nVetor Principal:\n");
    for (i = 0; i < 20; i++) {
        printf("%d\n", numbers[i]);
    }

    printf("\nVetor Par:\n");
    for (i = 0; i < pairsCount; i++) {
        printf("%d\n", pairs[i]);
    }

    printf("\nVetor Impar:\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d\n", odd[i]);
    }
    
    getch();
    return 0;
}
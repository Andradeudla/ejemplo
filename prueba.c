#include <stdio.h>

int main() {
    int num, suma;

    do {
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &num);
    } while (num < 0);

    suma = num * (num + 1) / 2;

    printf("La suma de Gauss para %d es: %d\n", num, suma);

    return 0;
}
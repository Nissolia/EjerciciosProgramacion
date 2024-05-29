#include <stdio.h>

int main(void) {
    int numero;

    printf("Introduce un número entero: ");
    scanf("%d", &numero);

    // Verificar si el número es par y múltiplo de 5
    if (numero % 2 == 0 && numero % 5 == 0) {
        printf("El número es par y múltiplo de 5.\n");
    } else if (numero % 2 == 0 && numero % 5 != 0) {
        printf("El número es par pero no es múltiplo de 5.\n");
    } else if (numero % 2 != 0 && numero % 5 == 0) {
        printf("El número no es par pero es múltiplo de 5.\n");
    } else {
        printf("El número no es par ni múltiplo de 5.\n");
    }

    return 0;
}

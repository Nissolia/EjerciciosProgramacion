#include <stdio.h>

int main(void) {
    int edad;
    char permiso;

    printf("Introduce tu edad: ");
    scanf("%d", &edad);

    if (edad < 18) {
        printf("No puedes entrar\n");
    } else if (edad >= 18 && edad <= 20) {
        printf("¿Tienes un permiso especial? (s/n): ");
        scanf(" %c", &permiso); // Espacio antes de %c para evitar problemas con el buffer
        if (permiso == 's' || permiso == 'S') {
            printf("Puedes entrar con permiso\n");
        } else {
            printf("No puedes entrar\n");
        }
    } else {
        printf("Puedes entrar\n");
    }

    return 0;
}

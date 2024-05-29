#include <stdio.h>

int main(void) {
    char puerta, ventana, alarma;

    printf("¿La puerta está cerrada? (s/n): ");
    scanf(" %c", &puerta);  // Espacio antes de %c para evitar problemas con el buffer

    printf("¿La ventana está cerrada? (s/n): ");
    scanf(" %c", &ventana);

    printf("¿La alarma está activada? (s/n): ");
    scanf(" %c", &alarma);

    // Verificar las condiciones de seguridad
    if (puerta != 's' || ventana != 's' || alarma != 's') {
        printf("La casa no está segura\n");
    } else {
        printf("La casa está segura\n");
    }

    // Proporcionar mensaje adicional basado en el estado de la alarma
    switch (alarma) {
        case 's':
            printf("Alarma activada\n");
            break;
        case 'n':
            printf("Alarma desactivada\n");
            break;
        default:
            printf("Estado de la alarma desconocido\n");
            break;
    }

    return 0;
}

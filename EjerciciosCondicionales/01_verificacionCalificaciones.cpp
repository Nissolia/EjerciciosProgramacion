#include <stdio.h>

int main(void) {
    int calificacion;
    char proyectoExtra;

    printf("Introduce la calificación del examen final: ");
    scanf("%d", &calificacion);

    if (calificacion < 45) {
        printf("No has aprobado\n");
    } else if (calificacion >= 45 && calificacion <= 49) {
        printf("¿Has completado el proyecto extra? (s/n): ");
        scanf(" %c", &proyectoExtra); // Espacio antes de %c para evitar problemas con el buffer
        if (proyectoExtra == 's' || proyectoExtra == 'S') {
            printf("Has aprobado con proyecto extra\n");
        } else {
            printf("No has aprobado\n");
        }
    } else {
        printf("Has aprobado\n");
    }

    return 0;
}

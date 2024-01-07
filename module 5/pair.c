#include <stdio.h>

int estPair(int nombre) {
    return (nombre % 2 == 0);
}

void main(void) {
    printf("Entrez un nombre : ");
    int nombre;
    scanf("%d", &nombre);

    if (estPair(nombre)) {
        printf("%d est pair.\n", nombre);
    } else {
        printf("%d n'est pas pair.\n", nombre);
    }

    return 0;
}

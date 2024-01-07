#include <stdio.h>

int cube(int nombre) {
    return nombre * nombre * nombre;
}

void main(void) {
    printf("Avant l appel de la fonction.\n");

    int resultat_cube = cube(3);

    printf("Resultat du cube : %d\n", resultat_cube);

    printf("Apres l appel de la fonction.\n");

    return 0;
}

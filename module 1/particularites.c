#include <stdio.h>

void main(void) {
    int nbEntier;
    double nbReel;

    printf("Nombre entier : ");
    scanf("%d", &nbEntier);

    printf("Nombre reel (avec un .) : ");
    scanf("%lf", &nbReel);

    printf("Entier : %d\n", nbEntier);
    printf("Reel : %.2f\n", nbReel);

}
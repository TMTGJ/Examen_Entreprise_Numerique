#include <stdio.h>

double pourcentage(int valeur, int total) {
    return (double)valeur / total * 100;
}

void main(void) {
    double resultat;
    resultat = pourcentage(11, 15);
    printf("%.1f\n", resultat);

    return 0;
}

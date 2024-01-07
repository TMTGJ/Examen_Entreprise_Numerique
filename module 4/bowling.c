#include <stdio.h>

#define NB_SCORES 5

void main(void) {
    int scores[NB_SCORES];

    printf("Veuillez entrer les 5 scores :\n");
    for (int i = 0; i < NB_SCORES; i++) {
        printf("Score %d : ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("\nAffichage des valeurs :\n");
    for (int i = 0; i < NB_SCORES; i++) {
        printf("Cellule d'indice %d - Adresse %p - Valeur : %d\n", i, (void*)&scores[i], scores[i]);
    }

    return 0;
}
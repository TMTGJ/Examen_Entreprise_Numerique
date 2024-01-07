#include <stdio.h>

void main(void) {
    char voyelles[6] = {'a', 'e', 'i', 'o', 'u', 'y'};

    int adresseIP[4];

    printf("Entrez les 4 nombres de l'adresse IP séparés par des espaces : ");
    scanf("%d %d %d %d", &adresseIP[0], &adresseIP[1], &adresseIP[2], &adresseIP[3]);

    float tauxReussiteIG[4] = {32.8, 45.2, 68.5, 73.9}; 

    printf("Voyelles : ");
    for (int i = 0; i < 6; ++i) {
        printf("%c", voyelles[i]);
        if (i < 5) {
            printf("-");
        }
    }
    printf("\n");

    printf("Adresse IP : ");
    for (int i = 0; i < 4; ++i) {
        printf("%d ", adresseIP[i]);
    }
    printf("\n");

    float tauxMoyen = 0.0;
    for (int i = 0; i < 4; ++i) {
        tauxMoyen += tauxReussiteIG[i];
    }
    tauxMoyen /= 4.0;

    printf("Taux de réussite moyen de la section IG : %.1f%%\n", tauxMoyen);

    return 0;
}
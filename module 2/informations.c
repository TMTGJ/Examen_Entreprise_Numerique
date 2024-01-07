#include <stdio.h>

void main(void) {

    int age;
    char sexe;

    printf("Age : ");
    scanf("%d", &age);
    printf("%s\n", age > 0 && age < 18 ? "Valide" : "Invalide");

    // Ajout d'une instruction getchar() pour absorber le retour à la ligne restant dans le tampon d'entrée
    getchar();

    printf("Sexe : ");
    scanf("%c", &sexe);
    printf("%s\n", sexe == 'M' || sexe == 'F' ? "Valide" : "Invalide");

    return 0;
}

#include <stdio.h>

void  main(void) {

int nbParties;
int sommePoints = 0;


for (nbParties = 0; nbParties < 10; nbParties++) {
	int pointsPartie;
	printf("Points de la partie : ");
	scanf_s("%d", &pointsPartie);
	sommePoints += pointsPartie;
}
printf("Score moyen : %.2f", (double)sommePoints / nbParties);

}
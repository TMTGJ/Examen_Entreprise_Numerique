#include <stdio.h>

void main(void) {
int montantTotal = 0;
int montantJeu;
printf("Montant du jeu :\n");
scanf_s("%d", &montantJeu);

while (montantJeu =! 0) {

	montantTotal += montantJeu;

	printf("Montant du jeu :");
	scanf_s("%d", &montantJeu);
}
printf("Vous avez acheté pour un montant de %d  euros." , montantTotal);
}
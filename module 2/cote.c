#include <stdio.h>

void main(void)
{

	int cote;
	printf("Cote : ");
	scanf("%d", &cote);
	if (cote >= 10) {
		printf("Super ! Tu as reussi !");
	}
	if (cote < 10) {
		printf("Aie, c'est un echec !");
	}
}
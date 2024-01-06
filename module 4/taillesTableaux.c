#include <stdio.h>

void main(void) {
	char voyelles[6] = {6};
	int scores[5] = {20};
	double ecarts[5] = {40};

	printf("Adresse de la premiere cellule de voyelles: %p\n", voyelles);
	printf("Taille de voyelles en octets : %d\n", sizeof(voyelles));
	printf("Adresse de la premiere cellule de scores : %p\n", scores);
	printf("Taille de scores en octets: %d\n\n", sizeof(scores));
	printf("Adresse de la premiere cellule de ecarts : %p\n", ecarts);
	printf("Taille de ecarts en octets: %d\n", sizeof(ecarts));
} 

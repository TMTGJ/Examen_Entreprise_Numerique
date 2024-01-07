#include <stdio.h>
#include <stdbool.h>

void main(void) {
  double temperature = 17;
  int somme = 80;
  int nombre = 5;

  bool plusDe15Degres = temperature > 15;
  bool sommeEgaleA120 = somme == 120;
  bool nonNul = nombre != 0;
  bool pair = nombre % 2 == 0;
  
  printf("La condition est evaluee a %s\n", 
            plusDe15Degres ? "vrai" : "faux");
  printf("La condition est evaluee a %s\n", 
            sommeEgaleA120 ? "vrai" : "faux");
  printf("La condition est evaluee a %s\n", nonNul ? "vrai" : "faux");
  printf("La condition est evaluee a %s\n", pair ? "vrai" : "faux");

  return 0;
}


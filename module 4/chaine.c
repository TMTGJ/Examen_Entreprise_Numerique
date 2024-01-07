#include <stdio.h>

#define MAX_CARACTERES 80
#define T_PRENOM 51

void main(void) {
    char adresseMail[MAX_CARACTERES + 1] = "jacqmintom52@gmail.com";

    printf("Adresse mail : %s\n", adresseMail);

    char prenom[T_PRENOM] = "Tom";

    puts(prenom);
    puts("Quel joli prenom !");

    return 0;
}

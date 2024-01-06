#include <stdio.h>

void main(void) {


int nbJoursVacances = 27;
int nbJoursVacancesEnsoleilles = 11;
int nbJoursVacancesNonEnsoleilles = nbJoursVacances - nbJoursVacancesEnsoleilles;

double prixVacancesParJour = 7.50;
double budgetVacances = 300.00;
double depensesParJourEnsoleilleEnVacances = 8.25;
double prixTotalNormal = nbJoursVacances * prixVacancesParJour;
double nbJoursTotal = budgetVacances / prixVacancesParJour;
double depensesParJour = prixVacancesParJour * nbJoursVacancesEnsoleilles;
double depensesParJourEnsoleille = depensesParJourEnsoleilleEnVacances * nbJoursVacancesEnsoleilles;

printf("Nombre de jours de vacances non ensoleilles : %d\n", nbJoursVacancesNonEnsoleilles);
printf("Prix total des vacances : %.2f\n", prixTotalNormal);
printf("Nombre de jours de vacances autorises par le budget : %.2f\n", nbJoursTotal);
printf("Prix correspondant aux jours de vacances ensoleilles : %.2f\n", depensesParJour);
printf("Depenses totales pour les jours de vacances ensoleilles : %.2f\n", depensesParJourEnsoleille);
}
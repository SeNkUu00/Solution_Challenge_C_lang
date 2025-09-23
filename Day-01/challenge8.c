#include <stdio.h>
int main(void)
{

    float montant, rate, paiment, M;

    printf("entrer le montant du prêt :\n");
    scanf("%f", &montant);

    printf("entrer le taux d'intérêt :\n");
    scanf("%f", &rate);

    printf("entrer le paiement mensuel :\n");
    scanf("%f", &paiment);

    M = (montant * rate / 100) / 12;
    montant = montant + M - paiment;
    printf("le montant du prêt après le premier mois est : %.2f\n", montant);
    M = (montant * rate / 100) / 12;
    montant = montant + M - paiment;
    printf("le montant du prêt après le deuxième mois est : %.2f\n", montant);
    M = (montant * rate / 100) / 12;
    montant = montant + M - paiment;
    printf("le montant du prêt après le troisième mois est : %.2f\n", montant);

    return 0;
}

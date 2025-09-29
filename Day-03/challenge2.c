#include <stdio.h>

int main(void) {
    int digit_count[10] = {0}; // tableau pour compter chaque chiffre
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;      // récupère le dernier chiffre
        digit_count[digit]++; // incrémente le compteur du chiffre
        n /= 10;             // supprime le dernier chiffre
    }

    // Affichage du tableau
    printf("Chiffre : ");
    for (int i = 0; i < 10; i++)
        printf("%d ", i);
    printf("\nOccurrences : ");
    for (int i = 0; i < 10; i++)
        printf("%d ", digit_count[i]);
    printf("\n");

    return 0;
}

#include <stdio.h>

int main()
{

    int numirique;

    printf("Entrez une note numérique : ");
    scanf("%d", &numirique);

    if (numirique < 0 || numirique > 100)
    {
        printf("Erreur : la note doit être entre 0 et 100.\n");
        return 0;
    }

    int lettere = numirique / 10;

    switch (lettere)
    {
    case 10:
    case 9:
        printf("Note littérale : A\n");
        break;
    case 8:
        printf("Note littérale : B\n");
        break;
    case 7:
        printf("Note littérale : C\n");
        break;
    case 6:
        printf("Note littérale : D\n");
        break;
    default:
        printf("Note littérale : F\n");
        break;
    }

    return 0;
}

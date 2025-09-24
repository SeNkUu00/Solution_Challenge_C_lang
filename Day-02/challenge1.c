#include <stdio.h>

int main()
{
    char ISBN[32];

    printf("Entrez l'ISBN : ");
    scanf("%s", ISBN);

    printf("Préfixe GS1 : ");
    for (int i = 0; ISBN[i] != '\0' && ISBN[i] != '-'; i++)
    {
        printf("%c", ISBN[i]);
    }
    printf("\n");

    int i = 4;
    printf("Identifiant de groupe : ");
    while (ISBN[i] != '-' && ISBN[i] != '\0')
    {
        printf("%c", ISBN[i]);
        i++;
    }
    printf("\n");
    i++;

    printf("Code de l'éditeur : ");
    while (ISBN[i] != '-' && ISBN[i] != '\0')
    {
        printf("%c", ISBN[i]);
        i++;
    }
    printf("\n");
    i++;

    printf("Numéro d'article : ");
    while (ISBN[i] != '-' && ISBN[i] != '\0')
    {
        printf("%c", ISBN[i]);
        i++;
    }
    printf("\n");
    i++;

    printf("Chiffre de contrôle : ");
    while (ISBN[i] != '-' && ISBN[i] != '\0')
    {
        printf("%c", ISBN[i]);
        i++;
    }
    printf("\n");

    return 0;
}


#include <stdio.h>
#include <string.h>



typedef struct
{
    int jour;
    int mois;
    int annee;
} Date;

typedef struct
{
    int idAvion;
    char modele[50];
    int capacite;
    char statut[20];
    Date dateEntree;
} Avion;

// Ajouter un avion
void ajouterAvion(Avion avions[], int *nb)
{
    int n;
    printf("Combien d'avions a ajouter ? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Avion %d ID: ", *nb + 1);
        scanf("%d", &avions[*nb].idAvion);
        printf("Modele : ");
        scanf(" %[^\n]", avions[*nb].modele);
        printf("Capacite : ");
        scanf("%d", &avions[*nb].capacite);
        printf("Statut (Disponible, En maintenance, En vol) : ");
        scanf(" %[^\n]", avions[*nb].statut);
        printf("Date entree (jour mois annee): ");
        scanf("%d %d %d", &avions[*nb].dateEntree.jour,
              &avions[*nb].dateEntree.mois,
              &avions[*nb].dateEntree.annee);
        (*nb)++;
    }
}

// Modifier un avion
void modifierAvion(Avion avions[], int nb)
{
    int id, found = 0;
    printf("Enter the ID of the airplane to modify: ");
    scanf("%d", &id);

    for (int i = 0; i < nb; i++)
    {
        if (avions[i].idAvion == id)
        {
            found = 1;
            printf("Editing airplane with ID %d:\n", id);
            printf("New model: ");
            scanf(" %[^\n]", avions[i].modele);
            printf("New capacity: ");
            scanf("%d", &avions[i].capacite);
            printf("New status (Disponible / En maintenance / En vol): ");
            scanf(" %[^\n]", avions[i].statut);
            printf("New entry date (day month year): ");
            scanf("%d %d %d",
                  &avions[i].dateEntree.jour,
                  &avions[i].dateEntree.mois,
                  &avions[i].dateEntree.annee);
            printf("Airplane updated successfully.\n");
            break;
        }
    }
    if (!found)
        printf("No airplane found with ID %d.\n", id);
}

// Supprimer un avion
void supprimerAvion(Avion avions[], int *nb)
{
    int id, found = 0;
    printf("Entrez l'ID de l'avion à supprimer : ");
    scanf("%d", &id);

    for (int i = 0; i < *nb; i++)
    {
        if (avions[i].idAvion == id)
        {
            found = 1;
            for (int j = i; j < *nb - 1; j++)
                avions[j] = avions[j + 1];
            (*nb)--;
            printf("Avion avec ID %d supprime avec succes!\n", id);
            break;
        }
    }
    if (!found)
        printf("Aucun avion trouvé avec l'ID %d.\n", id);
}

// Afficher tous les avions
void afficherAvions(Avion avions[], int nb)
{
    printf("Liste des avions:\n");
    for (int i = 0; i < nb; i++)
    {
        printf("ID: %d\n", avions[i].idAvion);
        printf("Modèle: %s\n", avions[i].modele);
        printf("Capacité: %d\n", avions[i].capacite);
        printf("Statut: %s\n", avions[i].statut);
        printf("Date d'entrée: %02d/%02d/%04d\n",
               avions[i].dateEntree.jour,
               avions[i].dateEntree.mois,
               avions[i].dateEntree.annee);
        printf("-------------------------\n");
    }
}

// Rechercher un avion
void rechercherAvion(Avion avions[], int nb)
{
    int id, found = 0;
    printf("Entrez l'ID de l'avion à rechercher : ");
    scanf("%d", &id);

    for (int i = 0; i < nb; i++)
    {
        if (avions[i].idAvion == id)
        {
            found = 1;
            printf("Avion trouvé :\n");
            printf("ID: %d\n", avions[i].idAvion);
            printf("Modèle: %s\n", avions[i].modele);
            printf("Capacité: %d\n", avions[i].capacite);
            printf("Statut: %s\n", avions[i].statut);
            printf("Date d'entrée: %02d/%02d/%04d\n",
                   avions[i].dateEntree.jour,
                   avions[i].dateEntree.mois,
                   avions[i].dateEntree.annee);
            break;
        }
    }
    if (!found)
        printf("Aucun avion trouvé avec l'ID %d.\n", id);
}

// Trier les avions par ID
void trierAvions(Avion avions[], int nb)
{
    for (int i = 0; i < nb - 1; i++)
        for (int j = 0; j < nb - i - 1; j++)
            if (avions[j].idAvion > avions[j + 1].idAvion)
            {
                Avion temp = avions[j];
                avions[j] = avions[j + 1];
                avions[j + 1] = temp;
            }
}

// Coefficient d'occupation
void occupationCoefficient(Avion avions[], int nb)
{
    int availablePlanes = 0;
    for (int i = 0; i < nb; i++)
        if (strcmp(avions[i].statut, "Disponible") == 0)
            availablePlanes++;

    if (nb == 0)
    {
        printf("No planes available to calculate the coefficient.\n");
        return;
    }

    float coefficient = ((float)availablePlanes / (float)nb) * 100;
    printf("The occupation coefficient of the planes is: %.2f%%\n", coefficient);
}

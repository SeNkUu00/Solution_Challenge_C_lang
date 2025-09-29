#include "headers.h"

int main() {
    Avion avions[100]; 
    int nb = 0;        
    int choix;

    do {
        
        printf("\n====== Gestion d'Avions ======\n");
        printf("1. Ajouter un avion\n");
        printf("2. Modifier un avion\n");
        printf("3. Supprimer un avion\n");
        printf("4. Afficher tous les avions\n");
        printf("5. Rechercher un avion\n");
        printf("6. Trier les avions par ID\n");
        printf("7. Calculer le coefficient d'occupation\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterAvion(avions, &nb);
                break;
            case 2:
                modifierAvion(avions, nb);
                break;
            case 3:
                supprimerAvion(avions, &nb);
                break;
            case 4:
                afficherAvions(avions, nb);
                break;
            case 5:
                rechercherAvion(avions, nb);
                break;
            case 6:
                trierAvions(avions, nb);
                printf("Avions tries par ID avec succes.\n");
                break;
            case 7:
                occupationCoefficient(avions, nb);
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("Option invalide! Veuillez reessayer.\n");
        }

    } while (choix != 0);

    return 0;
}

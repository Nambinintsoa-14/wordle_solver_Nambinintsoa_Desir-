#include <stdio.h>
#include <string.h>
#include "filtres.h"

int main() {
    char mots[MAX_MOTS][MAX_LEN];
    int nb = charger_mots("ressource/bdd_wordle.txt", mots);

    if (nb == 0) {
        printf("Aucun mot chargé. Vérifiez le fichier bdd_wordle.txt\n");
        return 1;
    }

    printf("=== WORDLE SOLVER ===\n");
    printf("%d mots chargés.\n", nb);

    int choix;
    char lettre;
    char lettres[10];
    int nb_lettres;
    char sub[MAX_LEN];
    int position;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Mots contenant une lettre\n");
        printf("2. Mots contenant plusieurs lettres\n");
        printf("3. Mots contenant une substring\n");
        printf("4. Mots ne contenant PAS une lettre\n");
        printf("5. Lettre à une position exacte\n");
        printf("6. Lettre mal placée\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Entrez la lettre : ");
                scanf(" %c", &lettre);
                filtre_contient_lettre(mots, nb, lettre);
                break;
            case 2:
                printf("Combien de lettres ? ");
                scanf("%d", &nb_lettres);
                for (int i = 0; i < nb_lettres; i++) {
                    printf("Lettre %d : ", i + 1);
                    scanf(" %c", &lettres[i]);
                }
                filtre_contient_lettres(mots, nb, lettres, nb_lettres);
                break;
            case 3:
                printf("Entrez la substring : ");
                scanf("%s", sub);
                filtre_contient_substring(mots, nb, sub);
                break;
            case 4:
                printf("Entrez la lettre à exclure : ");
                scanf(" %c", &lettre);
                filtre_exclure_lettre(mots, nb, lettre);
                break;
            case 5:
                printf("Entrez la lettre : ");
                scanf(" %c", &lettre);
                printf("Position (1 à 5) : ");
                scanf("%d", &position);
                filtre_position_exacte(mots, nb, lettre, position - 1);
                break;
            case 6:
                printf("Entrez la lettre mal placée : ");
                scanf(" %c", &lettre);
                printf("À quelle position ? (1 à 5) : ");
                scanf("%d", &position);
                filtre_mal_placee(mots, nb, lettre, position - 1);
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 0);

    return 0;
}

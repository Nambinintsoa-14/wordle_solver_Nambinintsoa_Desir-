#include <stdio.h>
#include <string.h>
#include "filtres.h"

int charger_mots(const char *fichier, char mots[][MAX_LEN]) {
    FILE *f = fopen(fichier, "r");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir %s\n", fichier);
        return 0;
    }
    int nb = 0;
    while (fscanf(f, "%s", mots[nb]) == 1 && nb < MAX_MOTS) {
        nb++;
    }
    fclose(f);
    return nb;
}

void filtre_contient_lettre(char mots[][MAX_LEN], int nb, char lettre) {
    printf("\n--- Mots contenant '%c' ---\n", lettre);
    int trouve = 0;
    for (int i = 0; i < nb; i++) {
        if (strchr(mots[i], lettre) != NULL) {
            printf("%s\n", mots[i]);
            trouve++;
        }
    }
    printf("Total : %d mots\n", trouve);
}

void filtre_contient_lettres(char mots[][MAX_LEN], int nb, char *lettres, int nb_lettres) {
    printf("\n--- Mots contenant toutes les lettres ---\n");
    int trouve = 0;
    for (int i = 0; i < nb; i++) {
        int ok = 1;
        for (int j = 0; j < nb_lettres; j++) {
            if (strchr(mots[i], lettres[j]) == NULL) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            printf("%s\n", mots[i]);
            trouve++;
        }
    }
    printf("Total : %d mots\n", trouve);
}

void filtre_contient_substring(char mots[][MAX_LEN], int nb, const char *sub) {
    printf("\n--- Mots contenant '%s' ---\n", sub);
    int trouve = 0;
    for (int i = 0; i < nb; i++) {
        if (strstr(mots[i], sub) != NULL) {
            printf("%s\n", mots[i]);
            trouve++;
        }
    }
    printf("Total : %d mots\n", trouve);
}

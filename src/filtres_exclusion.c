#include <stdio.h>
#include <string.h>
#include "filtres.h"

void filtre_exclure_lettre(char mots[][MAX_LEN], int nb, char lettre) {
    printf("\n--- Mots sans la lettre '%c' ---\n", lettre);
    int trouve = 0;
    for (int i = 0; i < nb; i++) {
        if (strchr(mots[i], lettre) == NULL) {
            printf("%s\n", mots[i]);
            trouve++;
        }
    }
    printf("Total : %d mots\n", trouve);
}

void filtre_position_exacte(char mots[][MAX_LEN], int nb, char lettre, int position) {
    printf("\n--- Mots avec '%c' en position %d ---\n", lettre, position + 1);
    int trouve = 0;
    for (int i = 0; i < nb; i++) {
        if ((int)strlen(mots[i]) > position && mots[i][position] == lettre) {
            printf("%s\n", mots[i]);
            trouve++;
        }
    }
    printf("Total : %d mots\n", trouve);
}

void filtre_mal_placee(char mots[][MAX_LEN], int nb, char lettre, int position) {
    printf("\n--- Mots contenant '%c' mais pas en position %d ---\n", lettre, position + 1);
    int trouve = 0;
    for (int i = 0; i < nb; i++) {
        if (strchr(mots[i], lettre) != NULL) {
            if ((int)strlen(mots[i]) <= position || mots[i][position] != lettre) {
                printf("%s\n", mots[i]);
                trouve++;
            }
        }
    }
    printf("Total : %d mots\n", trouve);
}

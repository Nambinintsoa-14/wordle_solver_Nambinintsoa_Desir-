#ifndef FILTRES_H
#define FILTRES_H

#define MAX_MOTS 10000
#define MAX_LEN  20

int charger_mots(const char *fichier, char mots[][MAX_LEN]);

void filtre_contient_lettre(char mots[][MAX_LEN], int nb, char lettre);
void filtre_contient_lettres(char mots[][MAX_LEN], int nb, char *lettres, int nb_lettres);
void filtre_contient_substring(char mots[][MAX_LEN], int nb, const char *sub);

void filtre_exclure_lettre(char mots[][MAX_LEN], int nb, char lettre);
void filtre_position_exacte(char mots[][MAX_LEN], int nb, char lettre, int position);
void filtre_mal_placee(char mots[][MAX_LEN], int nb, char lettre, int position);

#endif

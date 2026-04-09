# wordle_solver_Nambinintsoa_Desir-

# Wordle Solver

Un programme en C qui aide à résoudre le jeu Wordle en filtrant
une liste de mots selon différents critères.

## Auteurs
- Nom1 (Propriétaire)
- Nom2 (Collaborateur)

## Structure du projet
wordle_solver_nom1_nom2/
├── bin/          → contient le programme compilé
├── include/      → contient les fichiers d'en-tête (.h)
├── src/          → contient les fichiers source (.c)
├── ressource/    → contient le fichier bdd_wordle.txt
├── Makefile
└── README.md

## Prérequis
- Avoir `gcc` installé sur votre machine
- Avoir `make` installé

## Installation
Cloner le projet :
```bash
git clone https://github.com/nom1/wordle_solver_nom1_nom2.git
cd wordle_solver_nom1_nom2
```

## Compilation
Pour compiler le projet :
```bash
make
```
Pour supprimer les fichiers compilés :
```bash
make clean
```

## Exécution
Lancer le programme :
```bash
./bin/wordle_solver
```

## Comment utiliser les filtres

Une fois le programme lancé, un menu apparaît avec 6 filtres :

| Numéro | Filtre | Utilisation |
|--------|--------|-------------|
| 1 | Lettre présente | Lettre en jaune ou vert dans Wordle |
| 2 | Plusieurs lettres présentes | Plusieurs lettres connues |
| 3 | Substring | Suite de lettres connues consécutives |
| 4 | Lettre absente | Lettre en gris dans Wordle |
| 5 | Lettre à position exacte | Lettre en vert dans Wordle |
| 6 | Lettre mal placée | Lettre en jaune dans Wordle |

## Exemple d'utilisation
=== WORDLE SOLVER ===
2315 mots chargés.
--- MENU ---

1.Mots contenant une lettre
2.Mots contenant plusieurs lettres
3.Mots contenant une substring
4.Mots ne contenant PAS une lettre
5.Lettre à une position exacte
6.Lettre mal placée
7.Quitter Votre choix : 5.Entrez la lettre : a
Position (1 à 5) : 3
--- Mots avec 'a' en position 3 

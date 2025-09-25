#include <stdio.h>
#include <stdlib.h>

// Fonction pour lire une matrice
void lireMatrice(int **matrice, int lignes, int colonnes) {
    printf("Saisir les elements de la matrice (%dx%d) :\n", lignes, colonnes);
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("Element [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &matrice[i][j]);
        }
    }
}

// Fonction pour afficher une matrice
void afficherMatrice(int **matrice, int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }
}

// Fonction pour additionner deux matrices
void additionMatrices(int **matrice1, int **matrice2, int **resultat, int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            resultat[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }
}

int main() {
    int lignes, colonnes;
    
    printf("=== ADDITION DE DEUX MATRICES ===\n\n");
    
    // Saisie des dimensions
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &colonnes);
    
    // Vérification que les dimensions sont valides
    if (lignes <= 0 || colonnes <= 0) {
        printf("Erreur : Les dimensions doivent etre positives.\n");
        return 1;
    }
    
    // Allocation mémoire pour les matrices
    int **matrice1 = (int **)malloc(lignes * sizeof(int *));
    int **matrice2 = (int **)malloc(lignes * sizeof(int *));
    int **resultat = (int **)malloc(lignes * sizeof(int *));
    
    for (int i = 0; i < lignes; i++) {
        matrice1[i] = (int *)malloc(colonnes * sizeof(int));
        matrice2[i] = (int *)malloc(colonnes * sizeof(int));
        resultat[i] = (int *)malloc(colonnes * sizeof(int));
    }
    
    // Saisie des matrices
    printf("\n--- Matrice 1 ---\n");
    lireMatrice(matrice1, lignes, colonnes);
    
    printf("\n--- Matrice 2 ---\n");
    lireMatrice(matrice2, lignes, colonnes);
    
    // Addition des matrices
    additionMatrices(matrice1, matrice2, resultat, lignes, colonnes);
    
    // Affichage des résultats
    printf("\n--- Matrice 1 ---\n");
    afficherMatrice(matrice1, lignes, colonnes);
    
    printf("\n--- Matrice 2 ---\n");
    afficherMatrice(matrice2, lignes, colonnes);
    
    printf("\n--- Resultat de l'addition ---\n");
    afficherMatrice(resultat, lignes, colonnes);
    
    // Libération de la mémoire
    for (int i = 0; i < lignes; i++) {
        free(matrice1[i]);
        free(matrice2[i]);
        free(resultat[i]);
    }
    free(matrice1);
    free(matrice2);
    free(resultat);
    
    return 0;
}
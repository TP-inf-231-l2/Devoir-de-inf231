#include <stdio.h>

void inverserTableau(int tableau[], int taille) {
    int debut = 0;
    int fin = taille - 1;
    
    while (debut < fin) {
        // Échanger les éléments
        int t = tableau[debut];
        tableau[debut] = tableau[fin];
        tableau[fin] = t;
        
        debut++;
        fin--;
    }
}

void afficherTableau(int tableau[], int taille) {
   printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
        if (i < taille - 1) {
         printf(",");
        }
    }
   printf("]");
}   

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7};
    int taille = sizeof(tab) / sizeof(tab[0]);
    
    printf("Tableau original : ");
    afficherTableau(tab, taille);
    
    inverserTableau(tab, taille);
    
    printf("Tableau inversé : ");
    afficherTableau(tab, taille);
    
    return 0;
}
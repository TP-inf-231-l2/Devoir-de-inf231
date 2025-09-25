#include<stdio.h>
int main(){
	float vect_a[3],vect_b[3],a,b,c;
	printf("entrez l'abcisse du premier vecteur:  \n");
	scanf("%f",&vect_a[0]);
    printf("entrez l'ordonnée du premier vecteur :  \n");
	scanf("%f",&vect_a[1]);
	printf("entrez la cote du premier vecteur:  \n");
	scanf("%f",&vect_a[2]);
	printf("vecteur1(%.2f; %.2f; %.2f)\n\n",vect_a[0],vect_a[1],vect_a[2]);
	printf("entrez l'abcisse du second vecteur : \n");
	scanf("%f",&vect_b[0]);
	printf("entrez l'ordonnée du second vecteur:  \n");
	scanf("%f",&vect_b[1]);
	printf("entrez la cote du second vecteur: \n");
	scanf("%f",&vect_b[2]);
	printf("vecteur2(%.2f; %.2f; %.2f)\n\n",vect_b[0],vect_b[1],vect_b[2]);
	a=(vect_a[1]*vect_b[2])-(vect_a[2]*vect_b[1]);
    b=(vect_a[2]*vect_b[0])-(vect_a[0]*vect_b[2]);
    c=(vect_a[0]*vect_b[1])-(vect_a[1]*vect_b[0]);
    printf("le produit vectoriel de vos deux vecteurs est : V=(%.2f; %.2f; %.2f)",a,b,c);
}


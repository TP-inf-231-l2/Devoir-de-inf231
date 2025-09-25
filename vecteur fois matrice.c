#include<stdio.h>
//fonction de multiplication......
void vecteurFoisMatrice(int vecteur[],int matrice[][10],int resultat[],int taillevecteur,int taillematrice){
	for(int i=0;i<taillematrice;i++){
		resultat[i]=0;
		for(int j=0;j<taillevecteur;j++){
			resultat[i]+=vecteur[j]*matrice[j][i];
		}
	}
}
int main(){
	int taillevecteur,taillematrice,j,i;
	printf("entrez la taille du vecteur:\n");
	scanf("%d",&taillevecteur);
	printf("entrez la taille de la matrice(nombre de colonnes):\n");
	scanf("%d",&taillematrice);
	int vecteur[taillevecteur];
	printf("entrez les valeurs du vecteur:\n");
	for(int i=0;i<taillevecteur;i++){
		scanf("%d",&vecteur[i]);
	}
	int matrice[taillevecteur][10];
	printf("entrez les valeurs de la matrice:\n");
	for(i=0;i<taillevecteur;i++){
		for(j=0;j<taillematrice;j++){
			scanf("%d",&matrice[i][j]);
		}
	}
	int resultat[taillematrice];
	vecteurFoisMatrice(vecteur,matrice,resultat,taillevecteur,taillematrice);
	printf("Résultat:\n");
	for(i=0;i<taillematrice;i++){
		printf("%d",resultat[i]);
		
	}
	printf("\n");
	return 0;
}
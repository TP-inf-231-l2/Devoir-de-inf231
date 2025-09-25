#include<stdio.h>
int main(){
	float tab[1000],max,med;
	int i,n,p;
	printf("entrez le nombre d'éléments que vous souhaitez enregistrer dans votre tableau:\n");
	scanf("%d",&n);
		for(i=0;i<=n-1;i++){
		printf("entrez la valeur de l'élément numéro %d \n",i+1);
		scanf("%f",&tab[i]);
	}
	printf("votre tableau:");
	for(i=0;i<=n-1;i++){
		printf(" %.2f  ",tab[i]);
	}
	printf("\n");
for(i=0;i<n-1;i++){
	for(p=0;p<n-1;p++){
		if(tab[p]>tab[p+1]){
			max=tab[p];
			tab[p]=tab[p+1];
			tab[p+1]=max;
		}
    }
}
	printf("tableau trié:");
	for(i=0;i<=n-1;i++){         
		printf(" %.2f  ",tab[i]);
	}                            
	printf("\n");
	if(n%2==0){
		med=(tab[(n-1)/2]+tab[((n-1)/2)+1])/2;
	}else{
		med=(tab[(n)/2]);
	}
	
	printf("la médiane de votre tableau est de : %.2f",med);
	return 0;
}
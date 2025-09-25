#include<stdio.h>
int main(){
	float tabtri[1000],tab[1000],max,med;
	int i,n,p;
	printf("entrez le nombre d'éléments que vous souhaitez enregistrer dans votre tableau:\n");
	scanf("%d",&n);
		for(i=0;i<=n-1;i++){
		printf("entrez la valeur de l'élément numéro %d \n",i+1);
		scanf("%f",&tab[i]);
	}
	printf("votre tableau:");
	for(i=0;i<=n-1;i++){
		tabtri[i]=tab[i];//copie de tab dans tabtri
		printf(" %.2f  ",tab[i]);
	}
	printf("\n");
for(i=0;i<n-1;i++){
	for(p=0;p<n-1;p++){
		if(tabtri[p]>tabtri[p+1]){
			max=tabtri[p];
			tabtri[p]=tabtri[p+1];
			tabtri[p+1]=max;
		}
    }
}
	printf("tableau trié:");
	for(i=0;i<=n-1;i++){         
		printf(" %.2f  ",tabtri[i]);
	}
	printf("\n");
	p=0;
	for(i=0;i<=n-1;i++){         
		if(tabtri[i]==tab[i]){
			p=p+0;
		}else{
			p=p+1;
		}
	}
		if(p!=0){
		   printf("Votre tableau n est pas trié!!!");
		}else{
		   printf("votre tableau est trié!!!\n");
		}
	
	return 0;
}

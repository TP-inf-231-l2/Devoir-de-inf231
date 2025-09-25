#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int a,b,i,n;
	char bi[1000],ci[1000];
		printf("entrer le premier nombre à multiplier:\n");
	    scanf("%d",&a);
	    printf("entrer le second nombre à multiplier:\n");
	    scanf("%d",&b);
	while(a<0 || b<0){
		printf("nombre(s) negatif(s) repéré(s) \n\n...SVP ENTREZ DES NOMBRES POSITIFS\n");
		printf("entrer le premier nombre à multiplier:\n");
	    scanf("%d",&a);
	    printf("entrer le second nombre à multiplier:\n");
	    scanf("%d",&b);}
	printf("%d %d \n",a,b);
	    for(i=0;i<=b-1;i++){
			bi[i]='1';
			}
		    bi[b]='\0';
	printf("%d=",b);
	for(n=0;n<=b-1;n++){
		     printf("%c",bi[n]);	
		     if(n!=b-1){
		     	printf("+");
			 }
	}
	printf("\n");
	printf("%d*%d = ",a,b);
	for(i=0;i<=a-1;i++){
		for(n=0;n<=b-1;n++){
		     printf("%c",bi[n]);	
		     if(n!=b-1){
		     	printf("+");
			 }    	
	   }
		if(i!=a-1){
			printf("+");
		}
	}
	printf(" = %d",a*b);
		
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int Tmax, i, n, tab[40];
    printf("entrez le nombre des élements dans le tableau:");
    sanf("%d",&Tmax);
    printf("entrez les élements du tableau");
    for(i=0; i<Tmax; i++){
       sanf("%d",&tab[i]);
    }
    printf("entrez l'élement à rechercher:");
    sanf("%d",&n);
    i=0;
    while(i<Tmax &&n!=tab[i]){
        i++;
    }
    if(i<Tmax){trouve dans la position=%d", i+1)
    }
    else{
        printf("Element non trouvé");
    }
    return 0;
}























































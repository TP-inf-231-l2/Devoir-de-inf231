#include <stdio.h>
#include <stdlib.h>

int main(){

    int M1[4][4]={{1,2,3,4},{3,7,2,9},{8,6,4,3},{5,9,2,1}};
    int M2[4][4]={{1,3,0,1},{0,1,3,3},{1,2,2,2},{4,3,3,2}};
    int M1*M2[4][4];
    int i, j, k, p;
    for (i=0; i<4; i++){
        for(j=0; j<4; j++){
            p=0
            for(k=0; k<4; k++){
                p=p+M1[i][k]*M2[k][j];
            }
            M1*M2[i][j]=p;
        }
    }
    printf("M1=\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d\t", M2[i][j]);
    }
       printf("\n");  
    }
    printf("M1*M2=\n");
    for(i=0; i<4; i++){
         for(j=0; j<4; j++){
            printf("%d\t", M1*M2[i][j]);
         }   
         printf("\n");
    }
    return 0;
}
#include <stdio.h>

void main(){
    /*for*/
    int i,n,x; 
    printf("--------tableaux de multiblication------\n");
    printf("Vous voulez entrer un nombre ! si oui entrer 1 : ");
    scanf("%d",&x);
    do{/*do....while*/
   
    printf("\nEntrer un nombre entier : \n");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d \n",i,n,i*n);
    }
    printf("Vous voulez entrer un autre nombre ! si oui entrer 1 : ");
    scanf("%d",&x);
    }while(x==1);
   /*while*/
   int j,m,y; 
    printf("--------tableaux de multiblication------\n");
    printf("Vous voulez entrer un nombre ! si oui entrer 1 : ");
    scanf("%d",&y);
    while(y==1){
   
    printf("\nEntrer un nombre entier : \n");
    scanf("%d",&m);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d \n",j,m,j*m);
    }
    printf("Vous voulez entrer un autre nombre ! si oui entrer 1 : ");
    scanf("%d",&y);
    }
}
#include <stdio.h>
void main(){
    char nom[10],prenom[10],CIN[10];
    int age;float moyenne;
    int x,choix,y,i;
        printf("Vous devez entrer vous information : \n");
        printf("Entrer votre nom complet : \n");
        scanf("%s %s", &nom, &prenom );
        printf("Entrer votre CIN : \n");
        scanf("%s", &CIN );
        printf("Entrer votre age : \n");
        scanf("%d", &age );
        printf("Entrer votre moyenne : \n");
        scanf("%2.f", &moyenne);
        printf("---Vos Informations---\n");
         printf("---nom complet---: %s %s\n",nom,prenom);
         printf("---CIN---: %s\n",CIN);
         if(age>18){
            printf("---Majeur---: %d\n",age);
         }else printf("---Mineur---: %d\n",age);
         if(moyenne>12){
            printf("---Admit---: %2.f\n",moyenne);
         }else if (moyenne<12 && moyenne>8){
            printf("---Redoublant---: %2.f\n",moyenne);
         }else printf("---Exclu---: %2.f\n",moyenne);
          printf("Au revoir !");
}

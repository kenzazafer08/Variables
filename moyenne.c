#include <stdio.h>
#include <stdbool.h>
void main()
{

 int A[10]; /* mon tableau   */
 int N;    
 int I;     
 int Moyenne;   
 int Somme=0;
 char nom[20]; /* chaine de caractaires  */
 int x=1;
  printf("Entrer votre nom : \n");
  scanf("%s", &nom );
 do {

 printf("Bonjour %s Vous voulez calculer la moyenne de combien de notes (max.10) : ",nom);
 scanf("%d", &N );

    
 for (I=0; I<N; I++)
    {
     printf("Note %d : ", I+1);
     scanf("%d", &A[I]);
     if( A[I]>20 || A[I]<0){
   printf("la note que vous avez entrer est non valide \n");
   continue;
 }
    }
 /* Affichage du tableau */
 printf("Voici vos notes :\n");
 for (I=0; I<N; I++){
 printf(" Note %d = %d ", I+1,A[I]);
 
 Somme = Somme+A[I];
 }
 printf("\n");
 Moyenne = Somme/N;
 printf("Votre moyenne est: %d ,",Moyenne);
 if(Moyenne>=12){
    printf("vous etes admis");
 }
 else if(Moyenne<12 && Moyenne >8){
    printf("vous etes redoublant");
 }
 else printf("vous etes exclu");

 
 printf("\nSi vous voulez calculez d'autre moyenne entrer 0 sinon 1 :");
 scanf("%d", &x);

 }while (x==0);

 }


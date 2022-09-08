#include <stdio.h>
void main()
{

 int A[10]; /* mon tableau   */
 int N;    
 int I;     
 int Moyenne;   
 int Somme=0;
 char nom[20]; /* chaine de caractaires  */
 bool y=1; /* chaine de caractaires  */
  printf("Bonjour ! Entrer votre nom : \n");
  scanf("%s \n", &nom );
 printf("Combien de note vous voulez entrer (max.10) : ");
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
 printf("%d -", A[I]);
 
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
}

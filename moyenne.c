#include <stdio.h>
void main()
{

 int A[10]; /* mon tableau   */
 int N;    
 int I;     
 int Moyenne;   
 int Somme=0;
  printf("calculer votre moyenne : ");
 printf("Combien de note vous voulez entrer (max.10) : ");
 scanf("%d", &N );
 for (I=0; I<N; I++)
    {
     printf("Note %d : ", I+1);
     scanf("%d", &A[I]);
    }
    
 /* Affichage du tableau */
 printf("Voici vos notes :\n");
 for (I=0; I<N; I++){
 printf("%d -", A[I]);
 Somme = Somme+A[I];
 }printf("\n");
 Moyenne = Somme/N;
 printf("Votre moyenne est: %d ,",Moyenne);
 if(Moyenne>=12){
    printf("vous etes admis");
 }else if(Moyenne<12 && Moyenne >8){
    printf("vous etes redoublant");
 }else printf("vous etes exclu");
}
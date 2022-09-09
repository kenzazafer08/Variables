#include <stdio.h>
#include <stdbool.h>
void main()
{
 int N; /*DIMENTION DU TABLEAU */  int A[N];  /* mon tableau   */
 int I;     
 float Moyenne;   
 int Somme=0;
 char nom[20]; /* chaine de caractaires  */
 int x=1,choix;
 
  printf("Entrer votre nom : \n");
  scanf("%s", &nom );
  printf("Bonjour %s Vous voulez entrer combien de notes (max.10) : ",nom);
  scanf("%d", &N );
  /* Remplissage du tableau */
 for (I=0; I<N; I++)
    {
     printf("Note %d : ", I+1);
     scanf("%d", &A[I]);
     Somme = Somme+A[I];
     if( A[I]>20 || A[I]<0){
   printf("la note que vous avez entrer est non valide \n");
   continue;
   
 }
    }

 do {
    
printf("Calculer la moyenne 1: \n");
 printf("la meilleure note 2: \n");
 printf("Afficher vos notes 3: \n");
 scanf("%d",&choix);
   	switch(choix)
  	{
  		case 1: /* calculer la moyenne des notes stocker dans le tableau */
   			 printf("\n");
             Moyenne = Somme/N;
             printf("Votre moyenne est: %.2f ,",Moyenne);/* Affichage du moyenne */
             if(Moyenne>=12){
               printf("vous etes admis");
              }
            else if(Moyenne<12 && Moyenne >8){
              printf("vous etes redoublant");
              }
             else printf("vous etes exclu");
  			break;
  		case 2 : /*MAXIMUM*/
        int tmp=0,position;
             printf("\n");
             
             for (I=0; I<N; I++){
             if(A[I]>tmp){
                tmp=A[I];
                position=I+1;
             }    
         }printf("La meilleure note est : Note %d : %d",position,tmp);
         break;
         case 3 :/*TRIE*/
          /* Affichage du tableau */
          printf("Voici vos notes :\n");
          for (I=0; I<N; I++){
           printf(" Note %d = %d \n", I+1,A[I]);
           }
         break;
		default:
			printf("\n Vous avez entré un choix non valide ");				    			
	}
printf("\nSi vous voulez continuer entrer 0 sinon 1 :");
 scanf("%d", &x);

 }while (x==0);

 }


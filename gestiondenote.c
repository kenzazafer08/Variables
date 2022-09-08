#include <stdio.h>
#include <stdbool.h>
void main()
{

 /* mon tableau   */
 int N;   int A[N];  
 int I;     
 int Moyenne;   
 int Somme=0;
 char nom[20]; /* chaine de caractaires  */
 int x=1,choix;
 
  printf("Entrer votre nom : \n");
  scanf("%s", &nom );
  printf("Bonjour %s Vous voulez entrer combien de notes (max.10) : ",nom);
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
   printf(" Note %d = %d \n", I+1,A[I]);
 
   Somme = Somme+A[I];
 }
 do {
    
printf("Calculer la moyenne 1: \n");
 printf("la meilleure note 2: \n");
 printf("la mauvaise note 3: \n");
 printf("trier vos notes 4: \n");
 scanf("%d",&choix);
   	switch(choix)
  	{
  		case 1:
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
  			break;
  		case 2 :
        int tmp;
             printf("\n");
             
             for (I=0; I<N; I++){
             if(A[I+1]>A[I]){
                tmp=A[I+1];
             }    
         }printf("La meilleure note est : %d",tmp);
         break;
         case 3 :
        int tm=100;
             printf("\n");
             for (I=0; I<N; I++){
             if(A[I]< tm){
                tm=A[I];
             }    
         }printf("La mauvaise note est : %d",tm);
         break;
         case 4 :
         int t;
             printf("\n");
             for (I=0; I<N; I++){
             if(A[I+1]> A[I]){
                t=A[I+1];
                A[I+1]=A[I];
                A[I]=t;
             }    
         }printf("Voici vos notes trier :\n");
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


#include <stdio.h>
#include <math.h>

int main(){
    char Op;
	float num1, num2, result = 0;
	printf("Calculatrice normale");
  	printf("\n Enter un Operator   : \n Addition : +\nSoustraction : -\nMultiplication : *\n Division : / \nPuissance ^ \n
    Plus grand divisseur commun :G\n Factorielle ! \n");
  	scanf("%c", &Op);
	
  	switch(Op)
  	{
		case '+':
            printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	        scanf("%f%f", &num1, &num2);
  			result = num1 + num2;
            printf("\n Le resultat de %.2f %c %.2f  = %.2f", num1, Op, num2, result);
  			break;
  		case '-':
            printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	        scanf("%f%f", &num1, &num2);
  			result = num1 - num2;
            printf("\n Le resultat de %.2f %c %.2f  = %.2f", num1, Op, num2, result);
  			break;
        case '*':
            printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	        scanf("%f%f", &num1, &num2);
  			result = num1 * num2;
            printf("\n Le resultat de %.2f %c %.2f  = %.2f", num1, Op, num2, result);
  			break;
        case '/':
        if(num2!=0){
            printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	        scanf("%f%f", &num1, &num2);
  			result = num1 / num2;
            printf("\n Le resultat de %.2f %c %.2f  = %.2f", num1, Op, num2, result);
            } else printf("Erreur !");
            break;
        case '^':
            printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	        scanf("%f%f", &num1, &num2); 
  			result = pow(num1,num2);
            printf("\n La puissance de %.2f a %.2f  = %.2f", num1, num2, result);
  			break;
        case '!':
            printf("\n Enter une valeur que vous voulez calculer :  \n");
  	        scanf("%f", &num1);
  			int i,r=1;
            for(i=2;i<=num1;i++){
                r=r*i;
            }result = r;
            printf("\n Le factorielle de  %.2f = %.2f", num1, result);
  			break; 
        case 'G':
            printf("\n Enter les deux valeurs Entieres que vous voulez calculer :  \n");
            int num3,num4;
  	        scanf("%d%d", &num3, &num4);
            int j;
  			for(j=1;j<=num3 && j<=num4;j++){
                if(((num3%j)==0) && ((num4%j)==0)){
                    result=j;
                }
            } printf("\n Le plus grand divisseur commun est :", result);
  			break;   
         
		default:
			printf("\n Vous avez entré un opérateur non valide ");				    			
	}
    return 0;
}
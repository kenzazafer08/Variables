#include <stdio.h>
#include <math.h>

void main(){
    char Op;
	float num1, num2, result = 0;
    
	printf("Calculatrice scientifique\n");
    printf("Addition : + \n");
    printf("Soustraction : -\n");
    printf("Multiplication : *\n");
    printf("Division : /\n");
    printf("Puissance : ^\n"); 
    printf("Racine caree : R \n");
    printf("Factorielle : !\n");
    printf("Logarithme : L \n");
    printf("Exponentielle : E \n");
    printf("SIN : N \n");
    printf("TAN : T \n");
    printf("COS : C \n");
    printf("Le reste d'une division : M \n"); 
  	printf("Enter un Operateur : \n"); 
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
        printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	    scanf("%f%f", &num1, &num2);
        if(num2!=0){
  			result = num1 / num2;
            printf("\n Le resultat de %.2f %c %.2f  = %.2f", num1, Op, num2, result);
            } else printf("Erreur !");
            break;
        case 'M':
        int mod,n,m; 
        printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	    scanf("%d%d", &n, &m);
        if(num2!=0){
            mod = n % m;
            printf("\n Le rest de %d / %d  = %d", n, m, mod);
            } else printf("Erreur !");
            break;  
        case '^':
            printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	        scanf("%f%f", &num1, &num2); 
  			result = pow(num1,num2);
            printf("\n La puissance de %.2f a %.2f  = %.2f", num1, num2, result);
  			break;
        case 'L':
            printf("\n Enter une valeur que vous voulez calculer :  \n");
  	        scanf("%f", &num1); 
  			result = log(num1);
            printf("\n Logarithme de %.2f  = %.2f", num1, result);
  			break;
        case 'E':
            printf("\n Enter une valeur que vous voulez calculer :  \n");
  	        scanf("%f", &num1); 
  			result = exp(num1);
            printf("\n L'exponentielle de %.2f  = %.2f", num1, result);
  			break;
        case 'N':
            printf("\n Enter une valeur que vous voulez calculer :  \n");
  	        scanf("%f", &num1); 
  			result = sin(num1);
            printf("\n Le sin de %.2f  = %.2f", num1, result);
  			break;
        case 'C':
            printf("\n Enter une valeur que vous voulez calculer :  \n");
  	        scanf("%f", &num1); 
  			result = cos(num1);
            printf("\n Le cos de %.2f  = %.2f", num1, result);
  			break;
        case 'T':
            printf("\n Enter une valeur que vous voulez calculer :  \n");
  	        scanf("%f", &num1); 
  			result = tan(num1);
            printf("\n Le tan de %.2f  = %.2f", num1, result);
  			break;
        case 'S':
            printf("\n Enter une valeur que vous voulez calculer :  \n");
  	        scanf("%f", &num1); 
  			result = sqrt(num1);
            printf("\n Le racine caree de %.2f  = %.2f", num1, result);
  			break;
        case '!':
            printf("\n Enter une valeur que vous voulez calculer :  \n");
  	        scanf("%f", &num1);
  			int i,r=1;
            for(i=2;i<=num1;i++){
                r=r*i;
            }result = r;
            printf("\n Le factorielle de  %.2f = %.2f\n", num1, result);
  			break; 
		default:
			printf("\n Vous avez entrer un operateur non valide ");				    			
	}
}
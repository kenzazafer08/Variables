#include <stdio.h>
#include <math.h>
void mathematique(){
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
void equation(){
   int a,b,c;
   float d,r,r1;
   char choix; 
    printf("--------Exquations------\n");
    printf("quel type de fonction vous voulez :\n");
    printf("Premier degree : 1\n");
    printf("Dexieme degree : 2\n");
    scanf("%c",&choix);
    switch (choix)
    {
    case '1':
        printf("Equation premier degree\n");
        printf("Entrer a :\n");
        scanf("%d",&b);
        printf("Entrer b :\n");
        scanf("%d",&c);  
        r=-c/b;
        printf("La solution de cette equation : x = %.2f\n",r);
        break;
    case '2':
        printf("Entrer a :\n");
        scanf("%d",&a);
        if(a==0){
             printf("Equation premier degree\n");
             printf("Entrer b :\n");
             scanf("%d",&b);
             printf("Entrer c :\n");
             scanf("%d",&c);  
             r=-c/b;
             printf("La solution de cette equation : x = %.2f\n",r);
        }  else{     
    d=(b*b)-(4*a*c);
    if(d<0){
        printf("Delta : (%d^2)-(4*%d*%d) = %.2f \n",b,a,c,d);
        printf("Aucune solution dans l'ensemble R !\n");
    }else if(d==0){
       printf("Delta : (%d^2)-(4*%d*%d) = %.2f \n",b,a,c,d);
       r=-b/2*a;
       printf("La solution de cette equation est : x = %.2f \n",r);
    }else {
        printf("Delta : (%d^2)-(4*%d*%d) = %.2f\n",b,a,c,d);
        r= -(b + sqrt(d))/2*a;
        r1= -(b - sqrt(d))/2*a;
        printf("Il y a deux solution pur cette equation : x1 = %.2f et x2 = %.2f\n",r,r1);
       }
    }
        break;
    default:
    printf("Choix non valide");
        break;
    }
    
    
   
}
void main(){
    char choix;
    printf("Bonjour Choizisez un mod : \n");
    printf("Mathematique : 1\n");
    printf("Equation : 2\n");
    printf("Quitter : 3\n");
    scanf("%c",&choix);
    switch (choix)
    {
    case '1' :
    mathematique();
        break;
    case '2' :
    equation();
        break;
    case '3' :
    printf("Au revoire !");
        break;
    default:
     printf("Choix non valide !");
        break;
    }
}
#include <stdio.h>
int main(){
    char Op;
	float num1, num2, result = 0;
	printf("Calculatrice normale");
  	printf("\n Enter un Operator   :  ");
  	scanf("%c", &Op);
	printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	scanf("%f%f", &num1, &num2);
  	switch(Op)
  	{
		
  		case '+':
  			result = num1 + num2;
  			break;
  		case '-':
  			result = num1 - num2;
  			break;
        case '*':
  			result = num1 * num2;
  			break;
        case '/':
  			result = num1 / num2;
  			break;
		default:
			printf("\n Vous avez entré un opérateur non valide ");				    			
	}
  
	printf("\n The result of %.2f %c %.2f  = %.2f", num1, Op, num2, result);
    return 0;
}
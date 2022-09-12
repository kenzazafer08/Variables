#include <stdio.h>
float addition(float num1,float num2){
    float result;
    result = num1 + num2;
    return result;
}
float soustraction(float num1,float num2){
    float result;
    result = num1 - num2;
    return result;
}
float multiplication(float num1,float num2){
    float result;
    result = num1 * num2;
    return result;
}
float division(float num1,float num2){
    float result;
    result = num1 / num2;
    return result;
}
#include <stdio.h>
int main(){
    char Op;
	float num1, num2, result = 0;
	printf("Calculatrice normale");
  	printf("\n Enter un Operateur   :  ");
  	scanf("%c", &Op);
	printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	scanf("%f%f", &num1, &num2);
  	switch(Op)
  	{
		
  		case '+':
  			result = addition(num1,num2);
  			break;
  		case '-':
  			result = soustraction(num1,num2);
  			break;
        case '*':
  			result = multiplication(num1,num2);
  			break;
        case '/':
  			result = division(num1,num2);
  			break;
		default:
			printf("\n Vous avez entré un opérateur non valide ");				    			
	}
  
	printf("\n The result of %.2f %c %.2f  = %.2f", num1, Op, num2, result);
    return 0;
}
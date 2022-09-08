#include <stdio.h>
void main(){
    char Op;
	float num1, num2, num3 ;
	printf("Calcul");
  	printf("\n Enter un Operator  (= , < , > ) :  ");
  	scanf("%c", &Op);
	printf("\n Enter trois valeurs : num1 and num2  and num3 :  \n");
  	scanf("%f%f%f", &num1, &num2, &num3);
  	switch(Op)
  	{
		
  		case '=':
  			if(num1==num2 && num2==num3){
                printf("Les chiffres que vous avez entrés sont égaux");
            }else printf("Les chiffres que vous avez entrés ne sont pas égaux");
  			break;
  		case '>':
        if(num1>num2 && num1>num3){
                printf("Le chifre le plus grand est : %d",num1);
            }else if(num2>num1 && num2>num3){  printf("Le chifre le plus grand est : %d",num2);}
            else printf("Le chifre le plus grand est : %d",num3);
  			break;
        case '<':
  			if(num1<num2 && num1<num3){
                printf("Le chifre le plus grand est : %d",num1);
            }else if(num2<num1 && num2<num3){  printf("Le chifre le plus grand est : %d",num2);}
            else printf("Le chifre le plus grand est : %d",num3);
  			break;
		default:
			printf("\n Vous avez entré un opérateur non valide ");				    			
	}
}
#include <stdio.h>
void main(){
    int num1,num2,num3;
   printf("\n Enter deux valeurs : num1 and num2 and num3  :  \n");
  	scanf("%d%d%d", &num1, &num2, &num3);
    if(((num1>num2)&&(num1>num3)))
    {
        printf("Le nombre le plus grand est : %d ",num1);

    }else if ((num2>num1)&&(num2>num3)){
        printf("Le nombre le plus grand est : %d",num2);

    }else{
        printf("Le nombre le plus grand est : %d",num3);

    }
}
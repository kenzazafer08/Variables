#include <stdio.h>
void main(){
    int num1,num2;
   printf("\n Enter deux valeurs : num1 and num2   :  \n");
  	scanf("%d%d%d", &num1, &num2);
    if(((num1==num2)))
    {
        printf("Les deux nombre que vous avez entrée sont égales ");

    }else if ((num1>num2)){
        printf(" %d est supeieure a %d",num1,num2);

    }else{
        printf(" %d est inferieure a %d",num1,num2);

    }
}
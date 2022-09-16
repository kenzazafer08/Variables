#include <stdio.h>
int main()
{
   int Inverse = 0, chiffre;
   printf("Entrez un chiffre : \n");
   scanf("%d", &chiffre);
   while(chiffre!=0){
      Inverse=Inverse*10;
      Inverse=Inverse + chiffre%10;
      chiffre=chiffre/10;
   }
   printf("L'inverse est = %d\n", Inverse);
   return 0;
}

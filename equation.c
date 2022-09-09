#include <stdio.h>
#include <math.h>

void main(){
   int a,b,c;
   float d,r,r1;
    printf("--------Equation dexieme degrée------\n");
    printf("Entrer a :\n");
    scanf("%d",&a);
    printf("Entrer b :\n");
    scanf("%d",&b);
    printf("Entrer c :\n");
    scanf("%d",&c);
    if(a==0){
        printf("Equation premier degree\n");
        r=-c/b;
        printf("La solution de cette equation : x = %.2f\n",r);
    } else{     
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
}


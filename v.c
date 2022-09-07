#include <stdio.h>
#include <stdbool.h>


int main() {

    int age; // declartion 
    age = 22; // initialization
    int ageofGradution;
    int yearOfGradtion = 2022; // declartion and initialization
    int yearofbirth = 2000;// declartion and initialization
    int currentyear = 2022;
    int salaire = 7000;
    int salaire_annuel;
    int a=10 ,b=4 ;
    int div, rest;
    // types of vars 

    int Moyenne = 13.99; //integer 
    printf("my score is : %d\n" , Moyenne);

    char FirstNameLetter = 'k'; // single char
    char FullName[] = "kenza"; // array of chars 

    printf("The first letter in my name is : %c \n", FirstNameLetter);
    printf("My full name is : %s\n", FullName);

    float FloatNumber = 6.08; // 6 to 7 digits 
    double DouleNumber = 8.085699645600004; // up to 16 digits
    
    printf("My float number is : %f\n", FloatNumber);
    printf("My double number is : %lf\n", DouleNumber);

    // booleans

    bool isTrue = true;
    printf("%d\n", isTrue);
    bool isFalse = false;
    printf("%d\n", isFalse);

    ageofGradution = yearOfGradtion - yearofbirth;//soustraction
    printf("My age when a graduted was : %d\n",ageofGradution);
    currentyear = ageofGradution + yearofbirth;//addition
    printf("The current year is : %d \n",currentyear);
    salaire_annuel  = salaire * 12;//multiplication
    printf("Your annual salary is : %d\n",salaire_annuel);

    div = a / b ;// divise le premier opérande par le second.
    rest = a % b ;// renvoie le reste lorsque le premier opérande est divisé par le second
    printf("le resultat de la division est : %d \nle rest de la division est : %d\n",div,rest);
    if(age >= 18)// vérifie si le premier opérande est supérieur ou égal au deuxième opérande.
    {
       printf("I'm an adult\n");
    }
    else printf("Still a teenager !\n");
    if(Moyenne < 10)// vérifie si le premier opérande est inférieure au deuxième opérande.
    {
        printf("I have low grades i need to work on my skills\n");
    }
    else if(Moyenne == 10)//vérifie si les deux opérandes sont égales ou non.
    {
        printf("My grades are average\n");
    }
    else printf("My grades are good");
    
    return 0;
};
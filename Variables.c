#include <stdio.h>

void main(){

    /*
    * 1) LES TYPES DE VARIABLE
    */
    int i = 0;
    long l = 0;
    float f = 0.0;
    double d = 0.0;
    char c = 'a';

    /*
    * 2) LES VARIABLES UNSIGNED
    */
    unsigned int ui = 0;
    unsigned long ul = 0; // unsigned permet de stocker uniquement des valeurs positives
    unsigned char uc = 'a';

    /*
    * 3) AFFICHER DES VALEURS
    */
    printf("3) La valeur de i est %d\n", i); // int
    printf("3) La valeur de ui est %u\n", ui); // unsigned int
    printf("3) La valeur de l est %ld\n", l); // long
    printf("3) La valeur de f est %f\n", f); // float
    printf("3) La valeur de d est %f\n", d); // double
    printf("3) La valeur de c est %c\n", c); // caractère

    /*
    * 4) ENTRER UNE VALEUR AU CLAVIER
    */
    int valeur = 0;
    printf("4) Veuillez entrer une valeur : ");
    scanf("%d", &valeur); // type de la valeur attendue (ici 'd' pour un entier) + l'endroit où stocker la valeur
    printf("4) La valeur entree au clavier est %d\n", valeur);
}
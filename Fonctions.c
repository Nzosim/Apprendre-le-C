#include <stdio.h>

// en C les le main doit être en dessous des fonctions pour les utiliser sauf si on utilise les prototypes 
void printValeur(int valeur); // prototype de la fonction printValeur de la ligne 11

void main(){

    int valeur = 5;
    printValeur(valeur); // appel de la fonction

}

void printValeur(int valeur){

    printf("La valeur est de %d\n", valeur);

}
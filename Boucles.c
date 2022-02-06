#include <stdio.h>

void main(){

    /*
    * 1) FOR
    */
    int nombreIteration = 3;
    for(int i = 0 ; i < nombreIteration ; i++){
        printf("1) Iteration numero : %d\n", i);
    }

    /*
    * 2) WHILE
    */
    int maximum = 0;
    while (maximum < 3){
        printf("2) Maximum vaut actuellement : %d\n", maximum);
        maximum++;
    }

    /*
    * 3) DO WHILE
    */
    int condition = 5;
    do{
        printf("3) condition vaut actuellement : %d\n", condition);
    }while(condition < 5); // la condition n'est pas vérifiée au départ, mais le do while permet de faire au moins une itération
}
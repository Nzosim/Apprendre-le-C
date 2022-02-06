#include <stdio.h>

void main(){

    /*
    * 1) IF
    */
    int valeur = 0;
    if(valeur < 0){
        printf("1) Valeur inferieur a 0\n");
    }else if (valeur == 0){
        printf("1) Valeur egale a 0\n");
    }else{
        printf("1) Valeur superieur a 0\n");
    }

    /*
    * 2) SWITCH
    */
    int nombre = 26; 
    switch (nombre){
        case 1:
            printf("2) Le nombre est 1\n");
            break;
        case 2:
            printf("2) Le nombre est 2\n");
            break;
        case 26:
            printf("2) Le nombre est 26\n");
            break;
        default:
            printf("2) IDK");
            break;
    }

    /*
    * 3) CONDITIONS TERNAIRES
    */
    int attendu = 12;
    // condition ? si elle est vérifiée : si elle n'est pas vérifiée
    int resultat = attendu > 5 ? attendu : 47; // si attendu est supérieur à 5 résultat vaut attendu sinon il vaut 47
    printf("3) Attendu vaut : %d\n", resultat);

}
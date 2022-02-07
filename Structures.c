#include <stdio.h>

    /*
    * 1) DEFINIR UNE STRUCTURE
    */
    struct MaStructure{ // le noms d'une structure commence toujour par une majuscule
        int valeur;
    };
    typedef struct MaStructure MaStructure; // permet de ne pas mettre struct devant chaque nouvelle variable créer

    void carre(MaStructure *var);

void main(){
    
    /*
    * 2) UTILISER UNE STRUCTURE
    */
    MaStructure maStruct; // variable maStructu de type MaStructure
    maStruct.valeur = 5;
    printf("2) La valeur de maStruct est : %d\n", maStruct.valeur);
    printf("2) Veuillez entrer une valeur : ");
    scanf("%d", &maStruct.valeur); // ici nous avons besoin de '&' parceque c'est un entier, il n'en faut pas pour les tableaux et les pointeurs
    printf("2) La valeur de maStruct est : %d\n", maStruct.valeur);

    /*
    * 3) UTILISER LES STRUCTURES DANS DES FONCTIONS
    */
    MaStructure *var; // pointeurs de structure
    var->valeur = 10;
    carre(&var); // on utilise l'adresse de var

    /*
    * 4) ENUMERATIONS
    */
    typedef enum MonEnumeration MonEnumeration;
    enum MonEnumeration{
        UN,DEUX,TROIS
    };
    MonEnumeration numero = DEUX;

    enum MonEnumeration2{
        UN = 1 ,DEUX = 34,TROIS // ici TROIS vaut DEUX + 1
    };
}   

/*
* 3)
*/
void carre(MaStructure *var){
    var->valeur *= var->valeur; // permet de modifier la valeur d'un pointeur de structure
}
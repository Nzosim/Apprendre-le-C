#include <stdio.h>

void afficherTableau(int *tableau, int tailleDuTableau);

void main(){

    /*
    * 1) DEFINIR ET AFFICHER UN TABLEAU 
    */
    int tab[4]; // tableau de 4 entier
    tab[0] = 1;
    tab[1] = 2; // insère une valeur dans chaque case du tableau
    tab[2] = 3;
    tab[3] = 4;
    printf("1) Adresse tu tableau : %d\n",tab); 
    printf("1) Premiere valeur du tableau : %d\n",tab[0]); 
    printf("1) Premiere valeur du tableau : %d\n",*tab);
    printf("1) Deuxieme valeur du tableau : %d\n",*(tab+1)); 
    printf("1) Deuxieme valeur du tableau : %d\n",tab[1]);

    /*
    * 2) AUTRE MANIERE DE DEFINIR UN TABLEAU
    */
    int tableau1[4] = {0, 0, 0, 0};
    int tableau2[4] = {1, 2}; // insère les valeurs 1, 2, 0, 0
    int tableau3[4] = {0}; // insère les valeurs 0, 0, 0, 0
    int tableau4[] = {1, 2, 3, 4}; // tableau de taille 4 qui contient les valeurs 1, 2, 3, 4

    /*
    * 3) PARCOURIR UN TABLEAU
    */
    int t[] = {1, 2, 3, 4};
    for(int i = 0 ; i < 4 ; i++){
        printf("3) La valeur a la case %d est  : %d\n",i,t[i]);
    }

    /*
    * 4) UTILISER UN TABLEAU DANS UNE FONCTION
    */
    int tableauAffiche[4] = {10, 9, 8, 7};
    afficherTableau(tableauAffiche, 4);
}

void afficherTableau(int *tableau, int tailleDuTableau){ // pointeur du tableau, peut aussi etre noté int tableau[]
    for(int i = 0 ; i < tailleDuTableau ; i++){
        printf("4) La valeur a la case %d est  : %d\n", i, tableau[i]);
    }
}

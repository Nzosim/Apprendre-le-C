#include <stdio.h>

/*
* 1) DEFINIR UN TYPE CHAINE
*/
typedef struct maillon {
    int valeur;
    struct maillon *suivant; // maillon suivant de la chaine
}Maillon;
typedef Maillon *Chaine; // Chaine est un pointeur de maillon

/*
* 2) INITIALISER UNE CHAINE 
*/
Chaine init(){
    return NULL;
}

/*
* 3) AJOUTER UN ELEMENT EN TETE
*/
Chaine inhead(Chaine c, int v){
    Chaine res = (Chaine) malloc(sizeof(Maillon)); // accorde de la place à la nouvelle chaine
    res->valeur = v;
    res->suivant = c;
    return res;
}

/*
* 4) AJOUTER UN ELEMENT EN QUEUE
*/
Chaine intail(Chaine c, int v){
    Chaine res = c;
    if(c == NULL){ // verifie si la chaine est vide 
        c = inhead(c,v); // si la chaine est vide l'ajout ce fait en tête
    }else{
        while(res->suivant != NULL){ // boucle qui permet d'acceder à la fin de la liste
            res = res->suivant;
        }
        res->suivant = (Chaine) malloc(sizeof(Maillon));
        res->suivant->valeur = v;
    }
    return c;
}

/*
* 5) SUPPRESSION UN ELEMENT EN TETE
*/
Chaine suphead(Chaine c){
    return c->suivant == NULL ? NULL : c->suivant; // retourne le deuxieme maillon de la liste si il existe
}

/*
* 6) SUPPRESSION UN ELEMENT EN QUEUE
*/
Chaine suptail(Chaine c){
    Chaine res = c;
    while(res->suivant->suivant != NULL){ // boucle qui permet d'acceder à la fin de la liste
        res = res->suivant;
    }
    res->suivant = init(); // remet le dernier maillon à null
    return c;
}

/*
* 7) AFFICHER UNE LISTE
*/
void print(Chaine c){
    int i = 1;
    while(c != NULL){ // afficher tant que le maillon est different de null
        printf("\tLa valeur numero %d est : %d\n", i, c->valeur);
            c = c->suivant;
    
        i++;
    }
}



void main(){

    Chaine res = init();

    printf("\nTest ajout tete : \n");
    res = inhead(res, 2);
    res = inhead(res, 1);
    print(res);

    printf("\nTest ajout queue : \n");
    res = intail(res, 1);
    res = intail(res, 2); 
    print(res);

    printf("\nTest suppr tete : \n");
    res = suphead(res);
    print(res);

    printf("\nTest suppr queue : \n");
    res = suptail(res);
    print(res);

    printf("\n"); 

}

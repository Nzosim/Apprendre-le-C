#include <stdlib.h>
#include <stdio.h>

/*
* 1) Déclarer un fichier
*/
FILE * fichier;

void main(){
    int valeur;

    /*
    * 2) OUVRIR UN FICHIER TEXTE
    */
    fichier = fopen("nomDuFichier", "a");
    /* le deuxième paramètre est le type : 
        r = lecture depuis le début du fichier
        r+ = ecriture et lecture 
        w = création du fichier et écriture dans le fichier
        w+ = création, ecriture et lecture
        a = ecriture depuis la fin du fichier
        a+ = lecture et ecriture
        */
    
    /*
    * 3) OUVRIR UN FICHIER BINAIRE
    */
    fichier = fopen("nomDuFichier", "ab"); // il quffit d'ajouter un b après le mode d'ouverture du fichier

    /*
    * 4) LIRE DANS UN FICHIER TEXTE
    * EOF indique la fin d'un fichier
    */
    fscanf(fichier, "%d", &valeur); // 1er argument : le fichier, 2eme : le type de valeur, 3eme : l'adresse de la variable 

    /*
    * 5) LIRE DANS UN FICHIER BINAIRE
    * 0 indique la fin d'un fichier
    */
    fread(&valeur, sizeof(int), 1, fichier); // 1er argument : l'adresse de la variable , 2eme : le nombre d'octet à lire ici la taille d'un int donc 4, 3eme : ici 1 * le deuxième arg, 4eme : le fichier

    /*
    * 6) ECRIRE DANS UN FICHIER TEXTE
    */
    fprintf(fichier, "%d", valeur); 

    /*
    * 7) ECRIRE DANS UN FICHIER BINAIRE
    */
    fwrite(&valeur, sizeof(int), 1, fichier);

    /*
    * 8) FERMER UN FICHIER TEXTE OU UN FICHIER TEXTE
    */
    fclose(fichier);

}
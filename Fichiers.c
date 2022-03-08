#include <stdlib.h>
#include <stdio.h>

/*
* 1) Déclarer un fichier
*/
FILE * fichier;

void main(){
    int valeur;
    char ch[10];

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
    fgetc(fichier); // lire un caractère
    fgets(ch, 10, fichier); // lit 10 caractères de fichier
    fscanf(fichier, "%d", &valeur); // 1er argument : le fichier, 2eme : le type de valeur, 3eme : l'adresse de la variable 

    /*
    * 5) LIRE DANS UN FICHIER BINAIRE
    * 0 indique la fin d'un fichier
    */
    fread(&valeur, sizeof(int), 1, fichier); // 1er argument : l'adresse de la variable , 2eme : le nombre d'octet à lire ici la taille d'un int donc 4, 3eme : ici 1 * le deuxième arg, 4eme : le fichier

    /*
    * 6) ECRIRE DANS UN FICHIER TEXTE
    */
    fputc('A',fichier); // ecrire un caractère
    fputs("AKUNAMATATA", fichier); // ecrire une chaîne
    fprintf(fichier, "%d", valeur); // ecrire chaîne formatée

    /*
    * 7) ECRIRE DANS UN FICHIER BINAIRE
    */
    fwrite(&valeur, sizeof(int), 1, fichier);

    /*
    * 8) FERMER UN FICHIER TEXTE OU UN FICHIER TEXTE
    */
    fclose(fichier); // return 0 si cela a marché sinon EOF

    /*
    * 9) RENAME OU DELETE UN FICHIER
    */
    rename("ancierNom", "nouveauNom");
    remove(fichier);

    /*
    * 10) POSITION DANS UN FICHIER
    */
    ftell(fichier); // renvoie le position actuelle
    fseek(fichier, 5, SEEK_SET); // deplace le curseur de 5 depuis le debut, SEEK_CUR = position actuelle,  SEEK_END = fin du fichier
    rewind(fichier); // deplace le curseur à la position 0

    

}
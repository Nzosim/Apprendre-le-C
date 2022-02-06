#include <stdio.h>

void main(){

    /*
    * 1) LES CARACTERES
    */
    char A = 'A'; // les lettres sont converti en nombre avec la table ASCII
    printf("1) En C un caractere est un nombre exemple avec A qui vaut : %d\n", A); 
    printf("1) Mais on peut aussi retourner le caractere A : %c\n", A); // %c permet d'afficher un caractère
    
    /*
    * 2) INITIALISER UNE CHAINE DE CARACTERE
    */
    char chaine[4]; // une chaîne de caractère doit finir par \0 , pour un mot de 3 lettres il faut donc 4 place
    chaine[0] = 'W';
    chaine[1] = 'o';
    chaine[2] = 'W';
    chaine[3] = '\0';
    printf("2) La chaine de caractere vaut : %s\n", chaine); // %s permet d'afficher une chaîne de caractère

    // Une autre methode qui fonctionne mais seulement à l'initialisation du tableau est de directement donner la chaîne de caractère
    char chaine2[] = "Pomme de terre";
    printf("2) La chaine de caractere vaut : %s\n", chaine2);

    /*
    * 3) LIRE UNE CHAINE DE CARACTERE
    */
    char ch[100];
    printf("3) Veuillez entrer un mot : ");
    //scanf("%s", ch); // ici nous n'avons pas besoin de '&' parceque ch est un pointeur
    printf("3) Le mot est : %s\n", ch);

    /*
    * 4) ECRIRE DANS UNE CHAINE
    */
    char ch1[100];
    int valeur = 2;
    sprintf(ch1, "Valeur est %d", valeur); // écrit cette phrase dans la chaîne, le premier paramètre est la chaîne à remplir
    printf("4) %s\n", ch1);

    /*
    * 5) FONTIONS SUR LES CHAINES
    * #include <string.h> permet d'utiliser ces fonctions
    */
        /* 5.1) strlen, permet de calculer la taille d'une chaîne sans la dernière case \0 */ 
        char chaine3[] = "Yo";
        int taille = strlen(chaine3);
        printf("5.1) La chaine est compose de %d caracteres\n", taille);

        /* 5.2) strcpy, permet de copier une chaîne dans une autre */
        char chaine4[] = "WOW", copie[100] = {0};
        strcpy(copie, chaine4); // le premier paramètre est la chaîne qui va recevoir la copie et le deuxième est la chaîne copié
        printf("5.2) chaine4 vaut : %s et copie vaut : %s\n", chaine4, copie);

        /* 5.3) strcat, permet de concaténer deux chaîne */
        char chaine5[100] = "Yo", chaine6[] = "WOW";
        strcat(chaine5, chaine6); // On concatène chaine6 dans chaine5
        printf("5.3) chaine5 vaut : %s\n", chaine5);

        /* 5.4) strcmp, permet de comparer deux chaîne */
        char chaine7[] = "WOW";
        char chaine8[] = "WOW";
        int comparaison = strcmp(chaine7, chaine8); // strcmp retourne 0 si les deux chaînes sont identiques 
        if (!comparaison){
            printf("5.4) Les deux chaines sont identiques\n");
        }else{
            printf("5.4) Les deux chaines sont differentes\n");
        }

        /* 5.5) strchr, permet de chercher un caractère dans une chaîne, et retourne la chaîne à partir de ce caractère */ 
        char chaine9[] = "WOWOW";
        char *trouve = -1;
        trouve = strchr(chaine9, 'O');
        if (trouve != -1) {
            printf("5.5) La chaine a partir de 'O' est : %s", trouve);
        }
    
        // La fonction strrchr est l'inverse de strchr elle renvoi la chaîne à partir du dernier caractère trouve, dans chaine 9 avec '0' elle retournerai "OW"
        // strpbrk, recherche la première occurence des lettre de la chaine par exemple : strpbrk(chaine, "abc") renvoi la premiere occurence de a, de b ou de c
        // strstr renvoi la première occurence de la chaîne en paramètre
}
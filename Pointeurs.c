#include <stdio.h>

void carre(int *pointeurDeNombre);

void main(){

    /*
    * 1) POINTEUR
    */
    int nombre = 10; // &nombre = adresse de nombre printf("%p",&a) = 0x0023DD78, %p = hexadécimal
    int *pointeurDeValeur = &nombre; // pointeur qui pointe vers l'adresse de nombre
    // un pointeur est une variable qui stock une adresse
    printf("1) Adresse de la variable nombre : %d\n",pointeurDeValeur); 
    printf("1) Valeur de la variable nombre : %d\n",*pointeurDeValeur);
    printf("1) Adresse du pointeur : %d\n",&pointeurDeValeur); 

    /*
    * 2) SCANF
    */
    nombre = 0;
    printf("2) Veuillez entrer un nombre : ");
    scanf("%d", &nombre); // scanf utilise l'adresse de nombre pour le modifier
    printf("2) Nombre vaut actuellement : %d\n",nombre);

    int *nbr = &nombre; // pointeur qui pointe vers l'adresse de nombre
    printf("2) Veuillez entrer un nombre : ");
    scanf("%d", nbr); // ici pas besoin de '&' car un pointeur renvoi une adresse
    printf("2) Nombre vaut actuellement : %d\n",*nbr);

    /*
    * 3) UTILISATION DES POINTEURS
    */
    nombre = 5;
    carre(&nombre); // la fonction carre attend un pointeur, un pointeur est égal à une adresse on prend donc l'adresse de nombre
    printf("3) Nombre vaut actuellement : %d\n",nombre);
    
    // Une autre méthode est d'utiliser un pointeur
    nombre = 5;
    int *pointeurDeNombre = &nombre;
    carre(pointeurDeNombre); // ici nous n'avons pas besoin de '&' parceque un pointeur contient deja une adresse
    printf("3) Nombre vaut actuellement : %d\n\n",*pointeurDeNombre);

}

void carre(int *pointeurDeNombre){
    *pointeurDeNombre *= *pointeurDeNombre; // on utilise un pointeur sinon on ne modifie pas la valeur mais une copie
}

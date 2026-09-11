/*

    Définition : variable qui mémorise l'adresse d'une autre variable

    -- -- --

    Variable :  n       (valeur mémorisée par "n")
                &n      (adresse de la variable "n")

    Pointeur :  ptr     (adresse de la variable pointée)
                &ptr    (adresse du pointeur "ptr")
                *ptr    (valeur de la variable pointée)

    -- -- --

    1. Pointeur sur une donnée constante
    2. Pointeur constant sur une donnée
    3. Pointeur constant sur une donnée constante
    
*/

#include <stdio.h>

int main(void)
{
    int n = 68;
    int* ptr = &n;

    int m = 47;
    ptr = &m;

    printf("Valeur de n : %d\n",n);
    printf("Adresse de n : %p\n",&n);

    printf("-- -- --\n");

    printf("Valeur de m : %d\n",m);
    printf("Adresse de m : %p\n",&m);

    printf("-- -- --\n");

    printf("Valeur de ptr (adresse de la variable pointée): %p\n",ptr);
    printf("Adresse de ptr : %p\n",&ptr);
    printf("Valeur de la variable pointée : %d\n",*ptr);

    return 0;
}
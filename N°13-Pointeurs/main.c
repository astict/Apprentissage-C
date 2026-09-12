/*

    Définition : variable qui mémorise l'adresse d'une autre variable

    >> Un pointeur permet à une fonction d'accéder à une donnée située ailleurs en mémoire, notamment une variable déclarée dans le main, et donc de pouvoir la modifier.
    
    Une fonction peut ainsi modifier plusieurs valeurs sans forcément avoir besoin de les retourner avec return.

    -- -- --

    Variable :  n       (valeur mémorisée par "n")
                &n      (adresse de la variable "n")

    Pointeur :  ptr     (adresse de la variable pointée)
                &ptr    (adresse du pointeur "ptr")
                *ptr    (valeur de la variable pointée)

    -- -- --

    1. Pointeur sur une donnée constante
        > const int* ptr = &n
    2. Pointeur constant sur une donnée
        > int* const ptr = &n 
    3. Pointeur constant sur une donnée constante
        > const int* const ptr = &n
    
*/

#include <stdio.h>

int* getNumber()
{
    static int a = 19;
    return &a;
}

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

    printf("-- -- --\n");

    int* ptrA = getNumber();
    printf("%d\n",*ptrA);
    
    *ptrA = 18;
    printf("%d\n",*ptrA);


    return 0;
}
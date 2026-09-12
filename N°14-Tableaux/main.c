/*
    Tableau : type de données stockées en mémoire de manière contigüe
        - on ne peut pas assigner de valeur à un tableau
        - on ne peut pas comparer des tableaux entre eux

    [0] : 1er élément
    [1] : 2e élément
    ...
    [4] : dernier élément (n-1)

*/

#include <stdio.h>
#define ARRAY_SIZE 5

int main(void)
{
    // int numbers[5]; --> Déclare et intialise un tableau de 5 entiers, affectés à 0

    int numbers[ARRAY_SIZE] = {1, 2, 3, 4, 5};

    printf("%d\n", numbers[3]);   //Affiche la valeur 4

    printf("%d\n", *(numbers));   //Pointeur vers le 1er élément du tableau

    printf("%d\n", *(numbers + 1));   // == printf("%d\n", numbers[1]); 
    printf("%d\n", *(numbers + 2));   // == printf("%d\n", numbers[2]); 
    
    printf("-- -- --\n");

    printf("{");
    for(int i = 0; i < ARRAY_SIZE - 1; i++) 
    { printf("%d, ", *(numbers + i)); }
    printf("%d}\n", *(numbers + ARRAY_SIZE - 1));

    printf("-- -- --\n");

    //La taille en octets de mon tableau
    printf("%zu octets\n", sizeof(numbers));

    //Le nombre d'éléments dans mon tableau
    int size = (sizeof numbers) / (sizeof *(numbers));
    printf("%d éléments\n", size);

    


    return 0;
}
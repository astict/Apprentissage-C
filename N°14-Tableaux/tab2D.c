#include <stdio.h> 


void printArray(int* array, int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", *(array + i));

    printf("\n");
}


void printMatrix(int (*matrix)[3], int sizeL, int sizeC)
{
    for(int i = 0; i < sizeL; i++)
        for(int j = 0; j < sizeC; j++)
            printf("%d ", *(*(matrix + i) + j));

    printf("\n");
}


void resetValues(int (*matrix)[3], int sizeL, int sizeC)
{
    for(int i = 0; i < sizeL; i++)
        for(int j = 0; j < sizeC; j++)
            *(*(matrix + i) + j) = 0;
}



int main(void)
{

    int numbers[2][3] = 
    {
        {10, 20, 30},
        {40, 50, 60}
    };

    int size = (sizeof numbers) / (sizeof *(*(numbers)));



    printf(" C   L\n");

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            printf("[%d] [%d] = %d\n", i,j,*(*(numbers + i) + j));


    printf("-- -- --\n");


    for (int i = 0; i < size; i++)
        printf("%d ", *(&*(*(numbers)) + i));
    printf("\n");


    printf("-- -- --\n");


    printArray(&*(*(numbers)),size);    // &*(*(numbers)) --> l'adresse du 1er élément
 

    printf("-- -- --\n");


    printMatrix(numbers,2,3);
    resetValues(numbers,2,3);
    printMatrix(numbers,2,3);


    return 0;
}
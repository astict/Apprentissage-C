#include <stdio.h> 

void printArray(int* array, int size)
{

}

int main(void)
{
    int numbers[2][3] = 
    {
        {10, 20, 30},
        {40, 50, 60}
    };


    printf(" C   L\n");

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            printf("[%d] [%d] = %d\n", i,j,*(*(numbers + i) + j));


    printf("-- -- --\n");

    int size = (sizeof numbers) / (sizeof *(*(numbers)));

    printArray(numbers,size);

    return 0;
}
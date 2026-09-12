#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int** matrixNew(size_t lines, size_t columns)
{
    int** matrix = malloc(lines * sizeof(int*));

    if(!matrix)
    {
        perror("ERREUR MALLOC ");
        exit(1);
    }

    for(size_t i = 0; i < lines; ++i)
    {
        matrix[i] = malloc(columns * sizeof(int));

        if(!matrix[i])
        {
            for(size_t j = 0; j < i; ++j)
                free(matrix[j]);
            free(matrix);

            return NULL;
        }
    }

    return matrix;
}

void matrixFree(int** matrix, size_t lines)
{
    if(!matrix)
    {
        return;
    }

    for(size_t i = 0; i < lines; ++i)
        free(matrix[i]);
    free(matrix);
}

int main(void)
{
    const size_t lines = 3;
    const size_t columns = 3;

    int** mat = matrixNew(lines, columns);

    for(size_t i = 0; i < lines; ++i)
        for(size_t j = 0; j < columns; ++j)
            mat[i][j] = i + 1;

    for(size_t i = 0; i < lines; ++i)
        for(size_t j = 0; j < columns; ++j)
            printf("mat[%zu][%zu] = %d\n",i,j,mat[i][j]);

    matrixFree(mat, lines);

    return 0;
}
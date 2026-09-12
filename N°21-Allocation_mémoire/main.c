/*

    Pile : automatique (gérée par le compilateur et le processeur)
    Tas : manuelle (malloc, calloc, realloc, free)

    [FONCTIONS]
        void* malloc(size_t size)
        void* calloc(size_t num, size_t size)
        void* realloc(void* ptr, size_t new_size)
        void free(void* ptr)
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ARRAY_SIZE 15


int main(void)
{
    //  int* array = malloc(ARRAY_SIZE * sizeof(*array));
    int* array = calloc(ARRAY_SIZE, sizeof(*array));

    if(!array)
    {
        perror("ERREUR MALLOC");
        exit(1);
    }

    for(int i = 0; i < ARRAY_SIZE; i++)
        *(array + i) = i * 2;

    for(int i = 0; i < ARRAY_SIZE; i++)
        printf("array[%d] = %d\n",i,*(array + i));

    free(array);
    array = NULL;
    
}
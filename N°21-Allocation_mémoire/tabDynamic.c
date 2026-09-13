#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


struct intarray_t
{
    int* values;
    size_t size;
    size_t capacity;
};




bool intarray_init(struct intarray_t* array, size_t capacity)
{
    array->values = malloc(capacity * sizeof(int));

    if(!array->values)
        return false;

    array->size = 0;
    array->capacity = capacity;

    return true;
}


bool intarray_push(struct intarray_t* array, int val)
{
    if(array->size == array->capacity)
    {
        size_t newCapacity = array->capacity * 2;

        int* alloc = realloc(array->values, newCapacity * sizeof(int));

        if(!alloc)
            return false;

        array->values = alloc;
        array->capacity = newCapacity;
    }

    array->values[array->size++] = val;
    return true;
}


void intarray_free(struct intarray_t* array)
{
    free(array->values);

    array->values = NULL;
    array->size = 0;
    array->capacity = 0;
}


int main(void)
{
    struct intarray_t arr;

    if(!(intarray_init(&arr, 16)))
    {
        perror("ERREUR INIT ");
        exit(1);
    }

    printf("TAILLE : %zu, CAPACITE : %zu\n",arr.size, arr.capacity);


    for(size_t i = 0; i < 25; i++)
    {
        if(!intarray_push(&arr, i + 1))
        {
            fprintf(stderr, "Erreur d'ajout de valeur\n");
            break;
        }
    }

    for(size_t i = 0; i < arr.size; i++)
        printf("arr[%zu] = %d\n", i, arr.values[i]);



    printf("TAILLE : %zu, CAPACITE : %zu\n",arr.size, arr.capacity);

    for(size_t i = 0; i < arr.size; i++)
        printf("arr[%zu] = %d\n", i, arr.values[i]);

    
    if(!intarray_push(&arr, 100))
        fprintf(stderr, "Erreur d'ajout de valeur\n");


    printf("TAILLE : %zu, CAPACITE : %zu\n",arr.size, arr.capacity);

    for(size_t i = 0; i < arr.size; i++)
        printf("arr[%zu] = %d\n", i, arr.values[i]);


    intarray_free(&arr);

    return 0;
}
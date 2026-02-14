#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - sorts an array using Selection sort
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, minimum_index;
    int temp;

    if (array == NULL || size < 2)
    return;

    for (i = 0; i < size - 1; i++)
    {
        minimum_index = i;
        for(j = i + 1; j < size; j++)
        {
            if(array[j] < array[minimum_index])
                minimum_index = j;
        }
        if (minimum_index != i)
        {
            temp = array[i];
            array[i] = array[minimum_index];
            array[minimum_index] = temp;
            print_array(array, size);
        }
    }
}

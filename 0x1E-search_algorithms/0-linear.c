#include "search_algos.h"

/**
 * linear_search - search for a value in an array
 * of integers.
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index where value is located or
 * -1 if value is not present in an array or if its NULL
 **/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (!array)
        return (-1);
    while (i < size)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
        i++;
    }
    return (-1);
}
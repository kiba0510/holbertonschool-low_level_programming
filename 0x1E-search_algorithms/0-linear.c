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

int linear_search(int *array, int size_t, int value)
{
    size_t index = 0;

    if (!array || !size)
    {
        return (-1);
    }

    while (index < size)
    {
        printf("Value checked array[%lu] = [%d]\n", index, array[index]);
        if (array[index] == value)
        {
            return (index);
        }
        index++;
    }
    return (-1);
}
#include "function_pointers.h"

/**
 *int_index - searches for integer
 *@array: array of characters
 *@size: size of array
 *@cmp: pointer to function
 *Return: index of the first element for cmp not return 0
 *if no elements matches. return -1
 *if size <= 0, returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

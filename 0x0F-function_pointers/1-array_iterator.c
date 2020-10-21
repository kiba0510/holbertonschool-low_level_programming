#include <stdio.h>

/**
 *array_iterator - execute function
 *@array: array of characters
 *@size: size of array
 *@action: pointer to the function
 *Return: zero
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

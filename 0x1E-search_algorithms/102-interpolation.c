#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the interpolation search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to look for
 * Return: index where the value is found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid = 0, left = 0, right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		mid = left + (((double)(right - left) / (
				       array[right] - array[left])) * (
					       value - array[left]));
		if (mid >= size)
		{
			printf("Value checked array[%ld] is out of range\n",
			       mid);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}

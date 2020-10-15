#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - creates array of integers
 *@min: value for minimum
 *@max: value for maximum
 *Return: array
 */
int *array_range(int min, int max)
{
	int *ar, i, t;

	i = 0;
	t = min;

	if (min > max)
		return (0);

	ar = (int *)malloc((max - min + 1) * sizeof(int));

	if (!ar)
		return (0);
	while (i <= max - min)
		ar[i++] = t++;

	return (ar);
}

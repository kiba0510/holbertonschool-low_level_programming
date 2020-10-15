#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocates memory blocks using malloc
 *@b: number of memory blocks required
 *Return: pointer to allocated memory block
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b);

	if (b <= 0)
		exit(98);

	if (p == NULL)
		exit(98);

	return (p);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_memset - copies a given char
 *@s: given string to be copied
 *@b: input
 *@n: number of bytes
 *Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 *_calloc - allocates memory for array using malloc
 *@nmemb: number of elements
 *@size: size in bytes
 *Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, (nmemb * size));
	return (p);
}

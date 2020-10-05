#include "holberton.h"
/**
 *_memset - fills memory with a constant byte
 *@s: pointer to memory
 *@b: constant byte used to fill memory
 *@n: number of bytes used
 *Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
}
	return (s);
}

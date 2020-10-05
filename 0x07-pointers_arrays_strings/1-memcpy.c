#include "holberton.h"
/**
 *_memcpy - copies n bytes from source to destiny
 *@dest: memory block were the copied info will be placed
 *@src: memory block were we take the info to be copied
 *@n: bytes to be copied
 *Return: pointer to memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}

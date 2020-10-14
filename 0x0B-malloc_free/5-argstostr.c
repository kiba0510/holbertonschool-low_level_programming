#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - gives the length value of a string
 *@s: string to count
 *Return: length of the string as an integer
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}

/**
 *argstostr - concatenates arguments of a given program
 *@a: number of arguments
 *@av: arguments pointer to string
 *Return: pointer to string, NULL if fails
 */
char *argstostr(int ac, char **av)
{
	char *dest;
	unsigned int size, i, j, k;

	size = 0;
	k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		size += _strlen(av[i]);
	}

	dest = (char *)malloc((size + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			dest[k] = av[i][j];
			k++;
		}
		dest[k] = '\n';
		k++;
	}
	dest[k] = '\0';
	return (dest);
}

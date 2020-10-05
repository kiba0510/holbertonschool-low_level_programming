#include "holberton.h"
#include <stddef.h>

/**
 *_strpbrk - search a string for a set of bytes
 *@s: string to search
 *@accept: set of bytes to search for
 *Return: pointer to string
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)

	{

		for (b = 0; accept[b] != '\0'; b++)

		{

			if (accept[b] == s[a])

			{

				return (&s[a]);

			}

		}

	}

	return (NULL);
}

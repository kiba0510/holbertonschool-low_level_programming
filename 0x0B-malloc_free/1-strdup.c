#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen - gives the length of the string 
 *@s: counter for the string
 *Return: length of the string as integer
 */
char _strlen(char *s)
{
		unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		return (i + 1);
}

/**
 *_strdup - duplicates string
 *@str: source string to be copied
 *Return: pointer to string, NULL if fail
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	dest = (char *)malloc((_strlen(str)) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	

	return (dest);
}

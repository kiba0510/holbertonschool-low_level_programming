#include "holberton.h"
#include <stddef.h>
/**
 *_strchr - locates a character in a string
 *@s: pointer to the string
 *@c: character to search for
 *Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return (NULL);
	}
}

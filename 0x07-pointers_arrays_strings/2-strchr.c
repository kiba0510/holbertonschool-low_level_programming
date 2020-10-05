#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s: pointer to the string
 *@c: character to search for
 *Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	int i;

		if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}

	return (s);
}

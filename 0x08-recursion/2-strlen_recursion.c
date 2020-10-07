#include "holberton.h"
/**
 *_strlen_recursion - function that returns the length of a string
 *@s: string
 *Return: string length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
	{
	return (1);
	}
	else
	{
		return (_strlen_recursion(&s[1]) + 1);
	}
}

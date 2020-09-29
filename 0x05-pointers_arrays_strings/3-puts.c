#include "holberton.h"
/**
 *_puts - prints the content of the string
 *@str: pointer to a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
}
	_putchar ('\n');
}

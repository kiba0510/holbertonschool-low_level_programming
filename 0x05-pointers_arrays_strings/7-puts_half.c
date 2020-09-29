#include "holberton.h"
/**
 *puts_half - prints every other number
 *
 *@str: the string to print
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{}

	for (j = i / 2; i % 2 == 1; j++)
	{}

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

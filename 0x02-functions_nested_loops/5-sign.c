#include "holberton.h"
/**
 *print_sign - check if n is a sign
 *@n: is entry point
 *Return: 0
 **/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

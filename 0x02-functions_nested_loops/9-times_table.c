#include "holberton.h"
/**
 * times_table - prints times table up to 9
 *
 * Return: void
 *
 **/

void times_table(void)
{
	int y, x, z;

	z = 0;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			z = y * x;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (z >= 10)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else if ((z < 10) && (x != 0))
			{
				_putchar(' ');
				_putchar((z % 10) + '0');
			}
			else
				_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}

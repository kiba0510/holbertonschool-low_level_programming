#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - sum all the parameters in function
 *@n: number of arguments
 *Return: sum, if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	if (n)
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(valist, int);
		}
		va_end(valist);
	}
	return (sum);
}

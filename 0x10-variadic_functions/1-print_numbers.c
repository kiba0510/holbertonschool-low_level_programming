#include "variadic_functions.h"

/**
 *print_numbers - print given numbers followed by new line
 *@separator: string to be printed between numbers
 *@n: number of arguments
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	if (n != 0)
	{
		for (i = 0; (i < n - 1); i++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(valist, int), separator);
			}
			else
			{

				printf("%d", va_arg(valist, int));
			}
		}
		printf("%d", va_arg(valist, int));
		va_end(valist);
	}
	printf("\n");
}

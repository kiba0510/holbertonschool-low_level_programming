#include "variadic_functions.h"
/**
 * _printchar - print all the char args
 * @args: args passed to the function
 * Return: void function
 */
void _printchar(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * _printint - print all the int args
 * @args: args passed to the function
 * Return: void function
 */
void _printint(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * _printfloat - print all the float args
 * @args: args passed to the function
 * Return: void function
 */
void _printfloat(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * _printstring - print all the string args
 * @args: args passed to the function
 * Return: void function
 */
void _printstring(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	printf("%s", s == NULL ? "(nil)" : s);
}
/**
 * print_all - print all the arguments according with the format
 * @format: format to print
 * Return: void function
 */
void print_all(const char * const format, ...)
{
	unsigned int a, b;
	va_list args;
	char *s = "";

	fo charform[] = {
		{"c", _printchar},
		{"i", _printint},
		{"f", _printfloat},
		{"s", _printstring},
		{NULL, NULL}
	};
	va_start(args, format);
	a = 0;
	while (format && format[a])
	{
		b = 0;
		while (charform[b].op != NULL)
		{
			if (format[a] == charform[b].op[0])
			{
				printf("%s", s);
				charform[b].f(args);
				s = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(args);
}

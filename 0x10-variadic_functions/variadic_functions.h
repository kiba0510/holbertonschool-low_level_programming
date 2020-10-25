#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list args);
void _printint(va_list args);
void _printfloat(va_list args);
void _printstring(va_list args);
/**
 * struct fo - structure
 * @op: char name for print
 * @f: function to print
 */
typedef struct fo
{
	char *op;
	void (*f)();
} fo;

#endif

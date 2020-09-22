#include "holberton.h"


/**
 * print_alphabet - prints lower case alphabet
 *
 **/

void print_alphabet(void)
{

char x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}

/**
 * print_alphabet_x10 - prints aphabet 10 times
 *
 **/
void print_alphabet_x10(void)
{

int x;

for (x = '0'; x <= '9'; x++)
{
print_alphabet();
}
}

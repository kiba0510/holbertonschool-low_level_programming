#include "holberton.h"
#include <ctype.h>
/**
 *_islower - check if c is lower
 *@c: is entry point
 *Return: 0
 **/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

#include "holberton.h"
#include <ctype.h>
/**
 *_isupper - check if c is upper
 *@c: is entry point
 *Return: 0
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

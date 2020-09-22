#include "holberton.h"
#include <stdlib.h>
/**
 *_abs - check the absolute value of j
 *@j: is entry point
 *Return: 0
 **/
int _abs(int j)
{
if (j == 0)
{
return (j);
}
if (j < 0)
{
j = j * -1;
return (j);
}
else
{
return (j);
}
}

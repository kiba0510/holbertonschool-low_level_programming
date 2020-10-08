#include "holberton.h"
/**
 *sqr_con - finds square root of n
 *@n: number of square root
 *@m: test case for number
 *Return: square root of n or -1 if none
 */
int sqr_con(int n, int m)
{
	if (n == m * m)
		return (m);

	else if (n < m * m)
		return (-1);

	return (sqr_con(n, m + 1));
}

/**
 *_sqrt_recursion - finds natural square root of n
 *@n: number to square
 *Return: square root of n or -1 if none
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqr_con(n, 0));
}

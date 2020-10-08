#include "holberton.h"
/**
 *
 *
 *
 *
 */
int prime_con(int n, int i)
{
	if (n % i == 0)
		return (0);

	else if (n >= (i + 1) * (i * 1))
		return (prime_con(n, i + 1));

	return (1);
}

/**
 *is_prime_number - determine if n is a prime
 *@n: number to check
 *Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_con(n, 2));
}

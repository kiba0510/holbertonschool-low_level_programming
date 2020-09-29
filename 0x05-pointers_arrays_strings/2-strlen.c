#include "holberton.h"
/**
 *_strlen - prints the length of a string
 *@s: pointer to the string
 *Return: the length the string
 */
int _strlen(char *s)
{
	int num;

	for (num = 0; s[num] != '\0'; num++)
	{}

	return (num);
}

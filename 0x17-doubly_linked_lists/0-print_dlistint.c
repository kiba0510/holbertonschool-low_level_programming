#include "lists.h"

/**
 *print_dlistint - Prints all elements of dlistint_t list
 *@h: Pointer to Head of the given list
 *Return: Number of nodes in a given list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

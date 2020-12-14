#include "lists.h"

/**
 *dlistint_len - Counts and return all the elements in a dlistint_t list
 *@h: Pointer to the Head of a list
 *Return: Number of nodes in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

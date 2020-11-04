#include "lists.h"

/**
 *print_listint - Printe all elements of a list
 *@h: Pointer to list
 *Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int cnt;

	if (h == NULL)
		return (0);
	for (cnt = 0; h != NULL; cnt++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt);
}

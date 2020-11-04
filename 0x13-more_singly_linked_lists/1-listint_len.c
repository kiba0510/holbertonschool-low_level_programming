#include "lists.h"

/**
 *listint_len - Calculate the length of a list
 *@h: Pointer to the head of list
 *Return: Quantity of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int cnt;

	if (h == NULL)
		return (0);

	for (cnt = 0; h != NULL; cnt++)
	{
		h = h->next;
	}
	return (cnt);
}

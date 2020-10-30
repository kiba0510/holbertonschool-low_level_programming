#include "lists.h"

/**
 *list_len - Calculates the lenght of a linked list
 *@h: pointer to the head of the linked list
 *Return: The total number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;

	return (i);
}

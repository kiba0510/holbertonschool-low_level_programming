#include "lists.h"

/**
 *add_nodeint - Adds a node at the start of the list
 *@head: Pointer to the head of the list
 *@n: Number of nodes to add to the list
 *Return: Pointer to the head of the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;

	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (*head);
}

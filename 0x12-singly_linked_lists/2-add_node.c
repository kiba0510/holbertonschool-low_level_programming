#include "lists.h"
int len(const char *str);
/**
 *add_node - Creates and adds a new node into the list
 *@h: Pointer to the head oh the linst
 *@str: string to assign the node
 *Return: Pointer to the head of the linked list
 */

list_t *add_node(list_t **h, const char *str)
{
	list_t *new_node;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
		new_node->next = NULL;
	else
		new_node->next = *h;
	new_node->str = strdup(str);
	new_node->len = len(str);
	*h = new_node;
	return (*h);
}

/**
 *len - Calculates the string length
 *@str: Constant string
 *Return: Length of given string
 */

int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

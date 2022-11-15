#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of
 * @head: pointer to address of a list
 * @n: int in the node
 *
 * Return: Address of new element
 */
list_t *add_nodeint(list_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

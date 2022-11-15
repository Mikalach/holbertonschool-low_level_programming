#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of
 * @head: pointer to address of a list
 * @n: int in the node
 *
 * Return: Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

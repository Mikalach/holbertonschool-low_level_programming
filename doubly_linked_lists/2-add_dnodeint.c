#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of
 * @head: pointer to address of a list
 * @n: int in the node
 * Return: Address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	if (*head)
		(*head)->prev = new;
	return (*head);
}

#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end
 * @head: pointer of a list
 * @n: the int inside the node
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *sec;
	dlistint_t *fir = *head;

	sec = malloc(sizeof(listint_t));
	if (!sec)
		return (NULL);
	sec->n = n;
	sec->next = NULL;
	if (!*head)
	{
		*head = sec;
		return (*head);
	}
	while (fir->next)
		fir = fir->next;
	fir->next = sec;
	return (fir);
}

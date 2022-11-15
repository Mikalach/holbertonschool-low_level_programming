#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer of a list
 * @str: pointer to a string
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *sec;
	listint_t *fir = *head;

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

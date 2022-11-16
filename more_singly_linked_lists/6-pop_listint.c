#include "lists.h"


/**
 * pop_listint - remove thje head node
 * @head: pointer to the first node in the linked list
 * Return: the data inside the node that was deleted or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *stock;

	int num;

	if (!head || !*head)

		return (0);

	num = (*head)->n;

	stock = (*head)->next;

	free(*head);

	*head = stock;
	return (num);
}

#include "lists.h"

/**
 * free_list2 - function that free the list created before
 * @head: pointer to address of a list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *clean;

	if (!head)
		return;
	while (*head)
	{
		clean = (*head)->next;
		free(*head);
		*head = clean;
	}
	*head = NULL;
}

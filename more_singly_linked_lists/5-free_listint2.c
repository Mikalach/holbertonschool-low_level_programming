#include "lists.h"

/**
 * free_list - function that free the list created before
 * @head: pointer to address of a list
 * Return: void
 */

void free_listint(listint_t *head)
{
	list_t *clean;

	if (!head)
		return;
	while (*head)
	{
		clean = head;
		head = head->next;
		free(clean);
	}
	*head = NULL;
}

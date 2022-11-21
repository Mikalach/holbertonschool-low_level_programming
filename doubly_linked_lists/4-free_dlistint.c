#include "lists.h"

/**
 * free_dlistint - function that free the list created before
 * @head: pointer to address of a list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *clean;

	while (head)
	{
		clean = head;
		head = head->next;
		free(clean);
	}
}

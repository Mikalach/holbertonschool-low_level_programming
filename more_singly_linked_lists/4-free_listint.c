#include "lists.h"

/**
 * free_listint - function that free the list created before
 * @head: pointer to address of a list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *clean;

	while (head)
	{
		clean = head;
		head = head->next;
		free(clean->n);
		free(clean);
	}
}

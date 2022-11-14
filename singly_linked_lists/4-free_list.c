#include "lists.h"

/**
 * free_list - function that free the list created before
 * @head: pointer to address of a list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *clean;

	while (head)
	{
		clean = head;
		head = head->next;
		free(clean->str);
		free(clean);
	}
}

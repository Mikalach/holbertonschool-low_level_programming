#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: pointer to the struct
 * @index: index of the node
 * Return: nth node of a linked list or NULL if node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		++i;
	}
	return (NULL);
}

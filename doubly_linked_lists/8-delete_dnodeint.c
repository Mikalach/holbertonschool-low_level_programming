#include "lists.h"

/**
 *delete_dnodeint_at_index - function that deletes a node at a given index
 *@head: pointer to address of a linked list
 *@index: index of the list where node should be deleted
 *Return: 1 on success or 1 if no success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	dlistint_t *tmp, *pre, *nex, *used;
	unsigned int i;

	tmp = *head;
	if (!tmp)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (!tmp)
			return (-1);
	}
	if (!tmp->next)
	{
		used = tmp;
		used = tmp->prev;
		used->next = NULL;
		free(tmp);
		return (1);
	}
	pre = tmp->prev;
	nex = tmp->next;
	pre->next = nex;
	nex->prev = pre;
	free(tmp);
	return (1);
}

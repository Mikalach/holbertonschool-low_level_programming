#include "lists.h"


/**
 *insert_dnodeint_at_index - inserts a new node in a linked listat index pos
 *@head: pointer to the first node in the list
 *@idx: index where the new node is added
 *@n: data to insert in the new node
 *Return: pointer to the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
				     unsigned int idx, int n)
{
	unsigned int i;

	dlistint_t *new;

	dlistint_t *stock = *head;

	new = malloc(sizeof(dlistint_t));

	if (!new || !head)

		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	stock = *h

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; stock && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = stock->next;
			stock->next = new;
			return (new);
		}
		else
			stock = stock->next;
	}
	return (NULL);
}

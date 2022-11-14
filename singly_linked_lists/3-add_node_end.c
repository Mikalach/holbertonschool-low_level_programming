#include "lists.h"
/**
 * add_node_end - adds a node at the end
 * @head: pointer of a list
 * @str: pointer to a string
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *sec;
	list_t *fir = *head;

	sec = malloc(sizeof(list_t));
	if (!sec)
		return (NULL);
	sec->str = strdup(str);
	sec->len = strlen(str);
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

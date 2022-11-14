#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - function that print all the nodes
 *@h: pointer that point to each node one after another
 *Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			h = h->next;
		}
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}

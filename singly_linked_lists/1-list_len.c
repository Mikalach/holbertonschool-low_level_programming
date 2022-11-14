#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - function to determine the number of element
 *@h: pointer to the nodes
 *Return: the number of elements
 */


size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

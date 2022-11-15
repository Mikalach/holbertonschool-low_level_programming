#include "lists.h"

/**
 *print_listint - print all the element of an int list
 *@h: the pointer to the list
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h)
{
printf("%d\n", i);
h = h->next;
++i;
}
return (i);
}

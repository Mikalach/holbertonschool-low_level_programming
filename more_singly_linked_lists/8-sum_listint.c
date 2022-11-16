#include "lists.h"

/**
 * sum_listint - function that add together all data of linked list
 * @head: pointer to the struct
 * Return: the sum of all data in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

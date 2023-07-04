#include "lists.h"

/**
 * print_listint - prints list's data
 * @h: head node of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	counter = 0;

	while (h)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (counter);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all data in dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}

#include "lists.h"

/**
 * listint_len - calculate listint_t list's length
 * @h: head node of list
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}

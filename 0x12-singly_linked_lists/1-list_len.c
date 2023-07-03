#include "lists.h"

/**
 * list_len - calculates list_t list's length
 * @h: head node
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		counter++;
		h = h->next;
	}

	counter++;

	return (counter);
}

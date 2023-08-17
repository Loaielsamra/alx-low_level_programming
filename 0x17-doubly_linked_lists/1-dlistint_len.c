#include "lists.h"

/**
 * dlistint_len - return length of dlistint_t list
 * @h: pointer to head of list
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}

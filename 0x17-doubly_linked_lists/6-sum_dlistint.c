#include "lists.h"

/**
 * sum_dlistint - sums all data in dlistint_t list
 * @head: pointer to head of list
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * dlistint_len - Function
 * @h: node element
 * Return: Number of element in @h.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		head->n = sum;
		head = head->next;
		sum++;
	}
	return (sum);
}

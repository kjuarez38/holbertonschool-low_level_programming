#include "lists.h"

/**
 * sum_dlistint - Function
 * @head: node element
 * Return: Sum of element in @head.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

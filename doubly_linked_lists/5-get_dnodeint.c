#include "lists.h"

/**
 * free_dlistint - Function
 * @head: node element
 * Return: Nothing.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL || index > 0)
	{
		head = head->next;
		index--;
	}

	if (head != NULL)
	{
		if (head == index)
		{
			return (index);
		}
	}
	return (NULL);
}

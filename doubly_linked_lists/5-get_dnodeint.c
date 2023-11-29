#include "lists.h"

/**
 * free_dlistint - Function
 * @head: node element
 * Return: Nothing.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index == 0)
	{
		return (head);
	}

	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}

	if (head != NULL)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}

#include "lists.h"

/**
 * get_dnodeint_at_index - Function
 * @head: node element
 * @index: node to return
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

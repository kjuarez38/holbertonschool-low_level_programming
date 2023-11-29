#include "lists.h"

/**
 * free_dlistint - Function
 * @head: node element
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

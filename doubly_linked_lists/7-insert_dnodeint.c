#include "lists.h"

/**
 * insert_dnodeint_at_index - Function
 * @h: node element
 * @idx: place to the new_node
 * @n: int
 * Return: Sum of element in @head.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;


	if (new_node == NULL)
		return NULL;

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
		return new_node;
	}
	while (current != NULL && idx > 1)
	{
		current = current->next;
		idx--;
	}
	if (current == NULL)
	{
		free(new_node);
		return NULL;
	}
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;
	return new_node;
}


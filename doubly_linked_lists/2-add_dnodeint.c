#include "lists.h"

/**
 * *add_dnodeint - Function
 * @head: node element
 * @n: pointer data integer
 * Return: A new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dslinstint_t new_node = malloc(sizeof(dslistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (!*head)
	{
		*head->prev = new_node;
		new_node->next = *head;
	}
	*head = new_node;

	return (new_node);


}

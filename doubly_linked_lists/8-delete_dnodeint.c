#include "lists.h"

/**
 * insert_dnodeint_at_index - Function
 * @h: node element
 * @idx: place to the new_node
 * @n: int
 * Return: Sum of element in @head.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *del;
	unsigned int i = 0;


	if (index < i)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		for (i = 0 ; i < index ; i++)
			temp = temp->next;

		del = temp->next;

		temp->next = temp->next->next;
		del->next = NULL;
		free(del);
	}
	return (1);


}

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

	if (*head == NULL)
		return (-1);

	if (index == 0) {
		*head = (*head)->next;
		if (*head != NULL) {
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1 && temp != NULL; i++) {
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL) {
		return (-1);
	}

	del = temp->next;
	temp->next = del->next;

	if (del->next != NULL) {
		del->next->prev = temp;
	}

	free(del);
	return (1);
}

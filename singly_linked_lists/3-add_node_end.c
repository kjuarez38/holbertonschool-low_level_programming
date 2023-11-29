#include "lists.h"

/**
 * add_node_end - Function
 * @head: linked list
 * @str: add this new element
 * Description: print a linked list
 * Return: length of linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next)
		last = last->next;

	last->next = new_node;
	return (new_node);
}

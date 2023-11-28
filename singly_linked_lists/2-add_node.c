#include "lists.h"

/**
 * add_node - Function
 * @head: linked list
 * @str: add this new element
 * Description: print a linked list
 * Return: length of linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	if (!head)
		return (0);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

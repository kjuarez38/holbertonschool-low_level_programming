#include "lists.h"

/**
 * freeList - Function
 * @head: linked list
 * Description: free a linked list
 * Return: .Nothing
 */
void free_list(list_t* head)
{
	list_t* current = head;
	list_t* next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

}

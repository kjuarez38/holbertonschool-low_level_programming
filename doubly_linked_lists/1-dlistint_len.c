#include "lists.h"

/**
 * dlistint_len - Function
 * @h: node element
 * Return: Number of element in @h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		++cont;
		h = h->next;
	}
	return (cont);

}

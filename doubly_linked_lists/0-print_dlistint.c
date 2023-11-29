#include "lists.h"

/**
 * print_dlistint - Function
 * @h: node element
 * Return: Number of element in @h.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++cont;
		h = h->next;
	}
	return (cont);

}

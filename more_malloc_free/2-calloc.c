#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * _calloc - check the code
 *
 * @nmemb: data
 * @size: size of data
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *all;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	all = malloc(total_size);

	if (all == 0)
		return (NULL);

	memset(all, 0, total_size);

	return (all);

}

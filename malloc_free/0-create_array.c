#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - main description
 * @c: the character to print
 * @size: the size of the memory to print
 *
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	else
	{
		return (NULL);
	}

	return (ptr);
}


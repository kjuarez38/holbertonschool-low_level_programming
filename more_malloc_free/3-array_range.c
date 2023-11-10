#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * array_range - check the code
 *
 * @min: data min
 * @max: data max
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int size;
	int *mem;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	mem = malloc(sizeof(int) * size);

	if (mem == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		mem[i] = min + i;

	return (mem);
}

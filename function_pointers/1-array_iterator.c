#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - function
 *
 * @array: the array
 * @size: size of array
 * @action : pointer of function
 *
 * return: always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!action || size == 0 || !array)
		return;

	for (; i < size ; i++)
		action(array[i]);
}

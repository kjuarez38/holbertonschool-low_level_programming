#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_diagsums - check the code
 * @a: pointer array
 * @size: variable
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0;
	int i;
	int j;

	for (i = 0, j = 0; i < size; i++, j += size + 1)
	{
		d1 += a[j];
	}

	for (i = 0, j = size - 1; i < size; i++, j += size - 1)
	{
		d2 += a[j];
	}
	printf("%d, %d\n", d1, d2);
}

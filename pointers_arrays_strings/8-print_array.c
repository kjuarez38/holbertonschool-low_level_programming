#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - point
 * @a : pointers
 * @n : variable
 * Return: Always 1 (True) or 0 (False)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		if (i < n - 1)
			printf("%d, ", a[i]);
	}

}

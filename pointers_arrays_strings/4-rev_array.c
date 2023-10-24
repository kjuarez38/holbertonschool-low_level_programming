#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - main description
 * @a : pointers
 * @n : variable
 * Return: Always 1 (True) or 0 (False)
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
